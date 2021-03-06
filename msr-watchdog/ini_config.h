#pragma once

#include <Windows.h>

#include "mem_regs.h"
#include "msr_regs.h"

extern LPCTSTR lpProgramName;

typedef struct configuration {
	msr_regs	regs;
	mem_regs	pmem;
	int		watchdog_interval;
	int		oneshot;
	int		debug;
	int		winio_enabled;
	char		ini_path[4096];
} config;

int load_ini(const char *filepath, config *cfg);
