# Breakfast Macros
Breakfast Macros is a Windows-only macro handler for a second keyboard. It allows you to use a second keyboard as a macro keyboard and intercepts all keypresses from the selected keyboard. This program was mostly inspired by AutoHotKey and was created to make it easier to make basic hotkeys for a second keyboard. If you want a very advanced hotkey solution that can even control the time between fake keypresses, this is not the program for you. We plan on adding more features in the future. Since this program is new, you might encounter bugs. If you report a bug to us, we’ll fix it as soon as possible and ship out a new version.

## Table of Contents
- [Requirements](#requirements)
- [Installation](#installation)
    - [Uninstalling](#uninstalling)
- [Updating](#updating)
- [Credits](#credits)
- [Future](#future)

## Requirements
- A Windows computer
- A second keyboard
- Administrator privileges (for driver installation)

## Installation
> Make sure all above requirements are met.  
> If you run into an error saying that VCRUNTIME140_1.dll is missing, install the x64 version from [here.](https://aka.ms/vs/17/release/vc_redist.x64.exe) This can also be found and installed [here](https://docs.microsoft.com/en-US/cpp/windows/latest-supported-vc-redist?view=msvc-170).

### Interception
For your first install, interception ***MUST*** be installed.  The installer will prompt you to install it. You will have to restart your computer for interception to be fully installed.

### Application
Download the *latest* `macros-installer.zip` [here](https://github.com/Breakfast-Galaxy-Studios/Breakfast-Macros/releases/latest), then run the batch file by clicking on it. Follow the steps from the installer!

### Uninstalling
Uninstalling can be done by deleting the folder containing the application exe and all it's dependancies.  
Inteception can be uninstalled using the following steps:  
- Open command/powershell as admin.
- cd to the folder containing `install-interception.exe`(Wherever you extracted `macros-installer.zip`).
- Run the following command: `install-interception.exe /uninstall`
> You will have to restart your computer after uninstalling interception.

## Updating
In order to update the macros app, it is almost the same as installing. First, download the lated “macros-installer.bat” here then run it. Choose the same path as to where you first installed the Macros program. Heads up: you can choose no on the shortcut and start menu options if you installed the new version in the same directory. There is no need to reinstall interception.

## Credits
- [LibCurl](https://github.com/curl/curl)
- [QT](https://www.qt.io/)
- [Interception - Francisco Lopes](https://github.com/oblitum/Interception)
- [QDarkStyleSheet](https://github.com/ColinDuquesnoy/QDarkStyleSheet)

## Future
- Option to restart interception
- Option to reset settings
- Better GUI overall

