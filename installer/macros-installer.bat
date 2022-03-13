@if (@a==@b) @end /*


@echo off

:: BatchGotAdmin
:-------------------------------------
REM  --> Check for permissions
    IF "%PROCESSOR_ARCHITECTURE%" EQU "amd64" (
>nul 2>&1 "%SYSTEMROOT%\SysWOW64\cacls.exe" "%SYSTEMROOT%\SysWOW64\config\system"
) ELSE (
>nul 2>&1 "%SYSTEMROOT%\system32\cacls.exe" "%SYSTEMROOT%\system32\config\system"
)

REM --> If error flag set, we do not have admin.
if '%errorlevel%' NEQ '0' (
    echo Requesting administrative privileges...
    goto UACPrompt
) else ( goto gotAdmin )

:UACPrompt
    echo Set UAC = CreateObject^("Shell.Application"^) > "%temp%\getadmin.vbs"
    set params= %*
    echo UAC.ShellExecute "cmd.exe", "/c ""%~s0"" %params:"=""%", "", "runas", 1 >> "%temp%\getadmin.vbs"

    "%temp%\getadmin.vbs"
    del "%temp%\getadmin.vbs"
    exit /B

:gotAdmin
    pushd "%CD%"
    CD /D "%~dp0"

Set LATEST_REPO_LINK="https://github.com/Breakfast-Galaxy-Studios/Breakfast-Macros/releases/download/1.0/app.zip"

echo Choose a folder to install macros in

for /f "delims=" %%I in ('cscript /nologo /e:jscript "%~f0"') do (
    echo You chose %%I
    Set macrosPath=%%I
)

cd /D %macrosPath%

@echo %macrosPath%

@echo Downloading Macros Latest Version

curl -LO %LATEST_REPO_LINK%

powershell Expand-Archive app.zip -DestinationPath "%macrosPath%" -Force

del app.zip

goto :startmenuchoice

:makestartshortcut
echo Creating Start Menu shortcut...
set shortcutlocation="%USERPROFILE%\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Breakfast Macros.lnk"
set targetpath="%macrosPath%\Breakfast Macros\macros.exe"
set icon="%macrosPath%\Breakfast Macros\resources\logo.ico"
set workingdir="%macrosPath%\Breakfast Macros"

powershell "$s=(New-Object -COM WScript.Shell).CreateShortcut('%shortcutlocation%');$s.WorkingDirectory='%workingdir%';$s.IconLocation='%icon%';$s.TargetPath='%targetpath%';$s.Save()"

:shortcutchoice
set /P c=Would you like a desktop or a shortcut in another folder? [Y/N]?
if /I "%c%" EQU "Y" goto :makeshortcut
if /I "%c%" EQU "N" goto :interceptionchoice
goto :shortcutchoice

:makeshortcut
echo Creating Shortcut...
set targetpath="%macrosPath%\Breakfast Macros\macros.exe"
set icon="%macrosPath%\Breakfast Macros\resources\logo.ico"
set workingdir="%macrosPath%\Breakfast Macros"
for /f "delims=" %%I in ('cscript /nologo /e:jscript "%~f0"') do (
    echo You chose %%I
    Set shortcutlocation="%%I\Breakfast Macros.lnk"
)

powershell "$s=(New-Object -COM WScript.Shell).CreateShortcut('%shortcutlocation%');$s.WorkingDirectory='%workingdir%';$s.IconLocation='%icon%';$s.TargetPath='%targetpath%';$s.Save()"

:interceptionchoice

set /P c="Would you like to install interception(required for first install) [Y/N]?"
if /I "%c%" EQU "Y" goto :installinterception
if /I "%c%" EQU "N" goto :EOF
goto :interceptionchoice

:installinterception
echo Installing Interception...
cd /D "%~dp0"
install-interception.exe /install
PAUSE


goto :EOF

:startmenuchoice
set /P c=Would you like a start menu shortcut? [Y/N]?
if /I "%c%" EQU "Y" goto :makestartshortcut
if /I "%c%" EQU "N" goto :shortcutchoice
goto :startmenuchoice


:: JScript portion */

var shl = new ActiveXObject("Shell.Application");
var folder = shl.BrowseForFolder(0, "Choose where you want macros to be installed", 0, 0x00);
WSH.Echo(folder ? folder.self.path : '');