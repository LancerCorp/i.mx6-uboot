/*
 * Copyright (C) 2013 Freescale Semiconductor, Inc.
 *
 * Configuration settings for the Wandboard.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __CONFIG_H
#define __CONFIG_H

#include "mx6_common.h"
#include <asm/arch/imx-regs.h>
#include <asm/imx-common/gpio.h>
#include <asm/sizes.h>

#define CONFIG_MX6
#define CONFIG_DISPLAY_CPUINFO
#define CONFIG_DISPLAY_BOARDINFO

#define MACH_TYPE_WANDBOARD		4412
#define CONFIG_MACH_TYPE		MACH_TYPE_WANDBOARD

#define CONFIG_CMDLINE_TAG
#define CONFIG_SETUP_MEMORY_TAGS
#define CONFIG_INITRD_TAG
#define CONFIG_REVISION_TAG

/* Size of malloc() pool */
#define CONFIG_SYS_MALLOC_LEN		(10 * SZ_1M)

#define CONFIG_BOARD_EARLY_INIT_F
#define CONFIG_BOARD_LATE_INIT
#define CONFIG_MXC_GPIO

#define CONFIG_MXC_UART
#define CONFIG_MXC_UART_BASE		UART1_BASE

/* allow to overwrite serial and ethaddr */
#define CONFIG_ENV_OVERWRITE
#define CONFIG_CONS_INDEX		1
#define CONFIG_BAUDRATE			115200

/* Command definition */
#include <config_cmd_default.h>

#undef CONFIG_CMD_IMLS

#define CONFIG_CMD_BMODE
#define CONFIG_CMD_SETEXPR

#define CONFIG_BOOTDELAY		1

#define CONFIG_SYS_MEMTEST_START	0x10000000
#define CONFIG_SYS_MEMTEST_END		(CONFIG_SYS_MEMTEST_START + 500 * SZ_1M)
#define CONFIG_LOADADDR			0x12000000
#define CONFIG_SYS_TEXT_BASE		0x17800000

/* MMC Configuration */
#define CONFIG_FSL_ESDHC
#define CONFIG_FSL_USDHC
#define CONFIG_SYS_FSL_USDHC_NUM	2
#define CONFIG_SYS_FSL_ESDHC_ADDR	USDHC2_BASE_ADDR

#define CONFIG_MMC
#define CONFIG_CMD_MMC
#define CONFIG_GENERIC_MMC
#define CONFIG_BOUNCE_BUFFER
#define CONFIG_CMD_EXT2
#define CONFIG_CMD_EXT4
#define CONFIG_CMD_FAT
#define CONFIG_DOS_PARTITION
#define CONFIG_CMD_FS_GENERIC
#define CONFIG_SUPPORT_EMMC_BOOT /* eMMC specific */


/* Ethernet Configuration */
#define CONFIG_CMD_PING
#define CONFIG_CMD_DHCP
#define CONFIG_CMD_MII
#define CONFIG_CMD_NET
#define CONFIG_FEC_MXC
#define CONFIG_FEC_MXC_PHYADDR		3
#define CONFIG_FEC_XCV_TYPE		RGMII
#define IMX_FEC_BASE			ENET_BASE_ADDR
#define CONFIG_PHYLIB
#define CONFIG_PHY_ATHEROS
#define CONFIG_MII
#define CONFIG_ETHPRIME			"FEC0"
#define CONFIG_ARP_TIMEOUT		200UL
#define CONFIG_NET_RETRY_COUNT		5


/* USB */
#define CONFIG_CMD_USB
#define CONFIG_USB_EHCI
#define CONFIG_USB_EHCI_MX6
#define CONFIG_USB_STORAGE
#define CONFIG_MXC_USB_PORTSC		(PORT_PTS_UTMI | PORT_PTS_PTW)
#define CONFIG_MXC_USB_FLAGS		0
#define CONFIG_USB_MAX_CONTROLLER_COUNT	2
#define CONFIG_EHCI_HCD_INIT_AFTER_RESET	/* For OTG port */



#define CONFIG_EXTRA_ENV_SETTINGS \
	"image=/boot/zImage\0" \
	"console=ttymxc0\0" \
	"mmcdev=" __stringify(CONFIG_SYS_MMC_ENV_DEV) "\0" \
	"mmcpart=2\0" \
	"mmcroot=/dev/mmcblk0p2 video=mxcfb0:dev=ldb,1024x768M@60,if=RGB24 video=mxcfb1:dev=hdmi,1920x1080M@60,if=RGB24 gpumem=300M ro rootwait\0" \
	"mmcargs=setenv bootargs console=${console},${baudrate} " \
		"root=${mmcroot}\0" \
	"loadimage=ext4load mmc ${mmcdev}:${mmcpart} ${loadaddr} ${image}\0" \



#define CONFIG_BOOTCOMMAND \
	   "mmc dev ${mmcdev};" \
                "run mmcargs;" \
			    "run loadimage;" \
                "bootz;" \


/* Miscellaneous configurable options */
#define CONFIG_SYS_LONGHELP
#define CONFIG_SYS_HUSH_PARSER
#define CONFIG_AUTO_COMPLETE
#define CONFIG_SYS_CBSIZE		256

/* Print Buffer Size */
#define CONFIG_SYS_PBSIZE (CONFIG_SYS_CBSIZE + sizeof(CONFIG_SYS_PROMPT) + 16)
#define CONFIG_SYS_MAXARGS	       16
#define CONFIG_SYS_BARGSIZE CONFIG_SYS_CBSIZE

#define CONFIG_SYS_LOAD_ADDR		CONFIG_LOADADDR

#define CONFIG_CMDLINE_EDITING

/* Physical Memory Map */
#define CONFIG_NR_DRAM_BANKS		1
#define PHYS_SDRAM			MMDC0_ARB_BASE_ADDR

#define CONFIG_SYS_SDRAM_BASE		PHYS_SDRAM
#define CONFIG_SYS_INIT_RAM_ADDR	IRAM_BASE_ADDR
#define CONFIG_SYS_INIT_RAM_SIZE	IRAM_SIZE

#define CONFIG_SYS_INIT_SP_OFFSET \
	(CONFIG_SYS_INIT_RAM_SIZE - GENERATED_GBL_DATA_SIZE)
#define CONFIG_SYS_INIT_SP_ADDR \
	(CONFIG_SYS_INIT_RAM_ADDR + CONFIG_SYS_INIT_SP_OFFSET)

/* FLASH and environment organization */
#define CONFIG_SYS_NO_FLASH

#define CONFIG_ENV_SIZE			(8 * 1024)

#define CONFIG_ENV_IS_IN_MMC
#define CONFIG_ENV_OFFSET		(6 * 64 * 1024)
#define CONFIG_SYS_MMC_ENV_DEV		0

#define CONFIG_OF_LIBFDT
#define CONFIG_CMD_BOOTZ

#ifndef CONFIG_SYS_DCACHE_OFF
#define CONFIG_CMD_CACHE
#endif

/* Framebuffer */
/*
#define CONFIG_VIDEO
#define CONFIG_VIDEO_IPUV3
#define CONFIG_CFB_CONSOLE
#define CONFIG_VGA_AS_SINGLE_DEVICE
#define CONFIG_SYS_CONSOLE_IS_IN_ENV
#define CONFIG_SYS_CONSOLE_OVERWRITE_ROUTINE
#define CONFIG_VIDEO_BMP_RLE8
#define CONFIG_SPLASH_SCREEN
#define CONFIG_SPLASH_SCREEN_ALIGN
#define CONFIG_BMP_16BPP
#define CONFIG_VIDEO_LOGO
#define CONFIG_VIDEO_BMP_LOGO
#define CONFIG_IPUV3_CLK 260000000
#define CONFIG_IMX_HDMI
*/

#endif			       /* __CONFIG_H * */
