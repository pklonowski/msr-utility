#pragma once

#define BIT(nr)	(1ULL << (nr))
#define BITS_MASK(h, l) (((1ULL << ((h) - (l) + 1)) - 1) << (l))

#define MSR_PLATFROM_INFO				(0x0CE)		// Package

#define MSR_PKG_CST_CONFIG_CONTROL			(0x0E2)		// Core
#define MSR_PKG_CST_LIMIT				BITS_MASK(2, 0)
#define MSR_PKG_CST_LIMIT_C0C1				(0x0)
#define MSR_PKG_CST_LIMIT_C2				(0x1)
#define MSR_PKG_CST_LIMIT_C6_NORET			(0x2)
#define MSR_PKG_CST_LIMIT_C6_RET			(0x3)
#define MSR_PKG_CST_LIMIT_NO_LIMIT			(0x7)

#define MSR_PKG_CST_IO_MWAIT_REDIR_ENABLE		BIT(10)
#define MSR_PKG_CST_CFG_LOCK				BIT(15)
#define MSR_PKG_CST_AUTO_CSTATE_CONVER			BIT(16)
#define MSR_PKG_CST_C3_AUTO_DEMOTION			BIT(25)
#define MSR_PKG_CST_C1_AUTO_DEMOTION			BIT(26)
#define MSR_PKG_CST_C3_UNDEMOTION			BIT(27)
#define MSR_PKG_CST_C1_UNDEMOTION			BIT(28)
#define MSR_PKG_CST_PKG_CSTATE_DEMOTION			BIT(29)
#define MSR_PKG_CST_PKG_CSTATE_UNDEMOTION		BIT(30)

#define MSR_TURBO_RATIO_LIMIT3				(0x1AC)		// Package
#define MSR_TURBO_CFG_SEMAPHORE				BIT(63)

#define MSR_TURBO_RATIO_LIMIT				(0x1AD)		// Package
#define MSR_TURBO_RATIO_MAX_1C				BITS_MASK(7,  0)
#define MSR_TURBO_RATIO_MAX_2C				BITS_MASK(15, 8)
#define MSR_TURBO_RATIO_MAX_3C				BITS_MASK(23, 16)
#define MSR_TURBO_RATIO_MAX_4C				BITS_MASK(31, 24)
#define MSR_TURBO_RATIO_MAX_5C				BITS_MASK(39, 32)
#define MSR_TURBO_RATIO_MAX_6C				BITS_MASK(47, 40)
#define MSR_TURBO_RATIO_MAX_7C				BITS_MASK(55, 48)
#define MSR_TURBO_RATIO_MAX_8C				BITS_MASK(63, 56)

#define MSR_TURBO_RATIO_LIMIT1				(0x1AE)		// Package
#define MSR_TURBO_RATIO_MAX_9C				BITS_MASK(7,  0)
#define MSR_TURBO_RATIO_MAX_10C				BITS_MASK(15, 8)
#define MSR_TURBO_RATIO_MAX_11C				BITS_MASK(23, 16)
#define MSR_TURBO_RATIO_MAX_12C				BITS_MASK(31, 24)
#define MSR_TURBO_RATIO_MAX_13C				BITS_MASK(39, 32)
#define MSR_TURBO_RATIO_MAX_14C				BITS_MASK(47, 40)
#define MSR_TURBO_RATIO_MAX_15C				BITS_MASK(55, 48)
#define MSR_TURBO_RATIO_MAX_16C				BITS_MASK(63, 56)

#define MSR_TURBO_RATIO_LIMIT2				(0x1AF)		// Package
#define MSR_TURBO_RATIO_MAX_17C				BITS_MASK(7,  0)
#define MSR_TURBO_RATIO_MAX_18C				BITS_MASK(15, 8)
#define MSR_TURBO_RATIO_MAX_19C				BITS_MASK(23, 16)
#define MSR_TURBO_RATIO_MAX_20C				BITS_MASK(31, 24)
#define MSR_TURBO_RATIO_MAX_21C				BITS_MASK(39, 32)
#define MSR_TURBO_RATIO_MAX_22C				BITS_MASK(47, 40)
#define MSR_TURBO_RATIO_MAX_23C				BITS_MASK(55, 48)
#define MSR_TURBO_RATIO_MAX_24C				BITS_MASK(63, 56)

#define MSR_UNCORE_RATIO_LIMIT				(0x620)		// Package
#define MSR_UNCORE_RATIO_MAX				BITS_MASK(6,  0)
#define MSR_UNCORE_RATIO_MIN				BITS_MASK(14, 8)