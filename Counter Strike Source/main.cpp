// Copyright (c) 2021-2022 Lexa

#include "ui.h"
#include "config.h"
#include "wallhack.h"

int main() {
	Config config;
	Wallhack wallhack(config);

	UI ui(config, wallhack);
	ui.console();

	return 0;
}