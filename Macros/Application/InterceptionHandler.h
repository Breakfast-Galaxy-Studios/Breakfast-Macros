#pragma once
#include <atomic>
#include <Windows.h>

enum class InterceptionState {
	INTERCEPTING,
	REGISTERINGDEV,
	STOPPED
};

void setupInterception();

void cleanupInterception();

void setInterceptionState(InterceptionState newState);

bool isRegistering();

bool isIntercepting();

bool isStopped();

DWORD WINAPI thread_interception(LPVOID lpParam);