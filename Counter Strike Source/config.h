// Copyright (c) 2021-2022 Lexa

#include <string>
#include <cstdint>
#include <Windows.h>

#ifndef WALLCSS_CONFIG_H
#define WALLCSS_CONFIG_H

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wwritable-strings"

using namespace std;

class Config {
public:
	string console = "CS:S Wall Hack by Lexa";
	string window = "Counter-Strike Source";
	string clientLib = "client.dll";

	uintptr_t offset = 0x3B0C9C;

	DWORD toggleWallhackKey = VK_INSERT;
	DWORD toggleFlashingKey = VK_HOME;

	string toggleWallhackKeyName = "INSERT";
	string toggleFlashingKeyName = "HOME";
};

#endif