/*
 * (C) Copyright 2004-2009
 * Texas Instruments Incorporated
 * Richard Woodruff <r-woodruff2@ti.com>
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */
#ifndef _BOARD_SDP_H_
#define _BOARD_SDP_H_

#define OFF_IN_PD	0
#define OFF_OUT_PD	0

/*
 * IEN	- Input Enable
 * IDIS	- Input Disable
 * PTD	- Pull type Down
 * PTU	- Pull type Up
 * DIS	- Pull type selection is inactive
 * EN	- Pull type selection is active
 * M0	- Mode 0
 * The commented string gives the final mux configuration for that pin
 */
#define MUX_SDP3430()\
	/*SDRC*/\
	MUX_VAL(CP(SDRC_D0), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_D1), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_D2), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_D3), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_D4), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_D5), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_D6), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_D7), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_D8), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_D9), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_D10), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_D11), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_D12), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_D13), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_D14), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_D15), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_D16), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_D17), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_D18), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_D19), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_D20), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_D21), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_D22), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_D23), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_D24), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_D25), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_D26), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_D27), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_D28), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_D29), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_D30), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_D31), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_CLK), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_DQS0), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_DQS1), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_DQS2), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_DQS3), (IEN | PTD | DIS | M0))\
	/*GPMC*/\
	MUX_VAL(CP(GPMC_A1), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(GPMC_A2), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(GPMC_A3), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(GPMC_A4), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(GPMC_A5), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(GPMC_A6), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(GPMC_A7), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(GPMC_A8), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(GPMC_A9), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(GPMC_A10), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(GPMC_D0), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(GPMC_D1), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(GPMC_D2), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(GPMC_D3), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(GPMC_D4), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(GPMC_D5), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(GPMC_D6), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(GPMC_D7), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(GPMC_D8), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(GPMC_D9), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(GPMC_D10), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(GPMC_D11), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(GPMC_D12), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(GPMC_D13), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(GPMC_D14), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(GPMC_D15), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(GPMC_NCS0), (OFF_OUT_PD | IDIS | PTU | EN | M0))\
	MUX_VAL(CP(GPMC_NCS1), (OFF_OUT_PD | IDIS | PTU | EN | M0))\
	MUX_VAL(CP(GPMC_NCS2), (OFF_OUT_PD | IDIS | PTU | EN | M0))\
	MUX_VAL(CP(GPMC_NCS3), (OFF_OUT_PD | IDIS | PTU | EN | M0))\
	MUX_VAL(CP(GPMC_NCS4), (OFF_IN_PD | IEN | PTU | EN | M4)) /*G55-F_DIS*/\
	MUX_VAL(CP(GPMC_NCS5), (OFF_OUT_PD | IDIS | PTD | DIS | M4))/*G56T_EN*/\
	MUX_VAL(CP(GPMC_NCS6), (OFF_IN_PD | IEN | PTD | DIS | M4))/*G57-AGPSP*/\
	MUX_VAL(CP(GPMC_NCS7), (OFF_IN_PD | IEN | PTU | EN | M4))/*G58-WLNIQ*/\
	MUX_VAL(CP(GPMC_CLK), (OFF_OUT_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(GPMC_NADV_ALE), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(GPMC_NOE), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(GPMC_NWE), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(GPMC_NBE0_CLE), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(GPMC_NBE1), (OFF_IN_PD | IEN | PTD | DIS | M4)) /*G61-BTST*/\
	MUX_VAL(CP(GPMC_NWP), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(GPMC_WAIT0), (OFF_IN_PD | IEN | PTU | EN | M0))\
	MUX_VAL(CP(GPMC_WAIT1), (OFF_IN_PD | IEN | PTU | EN | M0))\
	MUX_VAL(CP(GPMC_WAIT2), (OFF_IN_PD | IEN | PTU | EN | M4)) /*GPIO_64*/\
	MUX_VAL(CP(GPMC_WAIT3), (OFF_IN_PD | IEN | PTU | EN | M4)) /*GPIO_65*/\
	/*DSS*/\
	MUX_VAL(CP(DSS_PCLK), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(DSS_HSYNC), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(DSS_VSYNC), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(DSS_ACBIAS), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(DSS_DATA0), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(DSS_DATA1), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(DSS_DATA2), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(DSS_DATA3), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(DSS_DATA4), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(DSS_DATA5), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(DSS_DATA6), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(DSS_DATA7), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(DSS_DATA8), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(DSS_DATA9), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(DSS_DATA10), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(DSS_DATA11), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(DSS_DATA12), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(DSS_DATA13), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(DSS_DATA14), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(DSS_DATA15), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(DSS_DATA16), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(DSS_DATA17), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(DSS_DATA18), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(DSS_DATA19), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(DSS_DATA20), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(DSS_DATA21), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(DSS_DATA22), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(DSS_DATA23), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	/*CAMERA*/\
	MUX_VAL(CP(CAM_HS), (OFF_IN_PD | IEN | PTU | EN | M0))\
	MUX_VAL(CP(CAM_VS), (OFF_IN_PD | IEN | PTU | EN | M0))\
	MUX_VAL(CP(CAM_XCLKA), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(CAM_PCLK), (OFF_IN_PD | IEN | PTU | EN | M0))\
	MUX_VAL(CP(CAM_FLD), (OFF_OUT_PD | IDIS | PTD | DIS | M4))/*G98-C_RST*/\
	MUX_VAL(CP(CAM_D0), (OFF_IN_PD | IEN | PTD | DIS | M2)) /*CAM_D0 */\
	MUX_VAL(CP(CAM_D1), (OFF_IN_PD | IEN | PTD | DIS | M2)) /*CAM_D1 */\
	MUX_VAL(CP(CAM_D2), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(CAM_D3), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(CAM_D4), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(CAM_D5), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(CAM_D6), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(CAM_D7), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(CAM_D8), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(CAM_D9), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(CAM_D10), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(CAM_D11), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(CAM_XCLKB), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(CAM_WEN), (OFF_IN_PD | IEN | PTD | DIS | M4)) /*GPIO_167*/\
	MUX_VAL(CP(CAM_STROBE), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(CSI2_DX0), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(CSI2_DY0), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(CSI2_DX1), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(CSI2_DY1), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	/*Audio InterfACe */\
	MUX_VAL(CP(MCBSP2_FSX), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(MCBSP2_CLKX), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(MCBSP2_DR), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(MCBSP2_DX), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	/*Expansion Card */\
	MUX_VAL(CP(MMC1_CLK), (OFF_OUT_PD | IDIS | PTU | EN | M0))\
	MUX_VAL(CP(MMC1_CMD), (OFF_IN_PD | IEN | PTU | EN | M0))\
	MUX_VAL(CP(MMC1_DAT0), (OFF_IN_PD | IEN | PTU | EN | M0))\
	MUX_VAL(CP(MMC1_DAT1), (OFF_IN_PD | IEN | PTU | EN | M0))\
	MUX_VAL(CP(MMC1_DAT2), (OFF_IN_PD | IEN | PTU | EN | M0))\
	MUX_VAL(CP(MMC1_DAT3), (OFF_IN_PD | IEN | PTU | EN | M0))\
	MUX_VAL(CP(MMC1_DAT4), (OFF_IN_PD | IEN | PTU | EN | M0))\
	MUX_VAL(CP(MMC1_DAT5), (OFF_IN_PD | IEN | PTU | EN | M0))\
	MUX_VAL(CP(MMC1_DAT6), (OFF_IN_PD | IEN | PTU | EN | M0))\
	MUX_VAL(CP(MMC1_DAT7), (OFF_IN_PD | IEN | PTU | EN | M0))\
	/*Wireless LAN */\
	MUX_VAL(CP(MMC2_CLK), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(MMC2_CMD), (OFF_IN_PD | IEN | PTU | EN | M0))\
	MUX_VAL(CP(MMC2_DAT0), (OFF_IN_PD | IEN | PTU | EN | M0))\
	MUX_VAL(CP(MMC2_DAT1), (OFF_IN_PD | IEN | PTU | EN | M0))\
	MUX_VAL(CP(MMC2_DAT2), (OFF_IN_PD | IEN | PTU | EN | M0))\
	MUX_VAL(CP(MMC2_DAT3), (OFF_IN_PD | IEN | PTU | EN | M0))\
	MUX_VAL(CP(MMC2_DAT4), (OFF_OUT_PD | IDIS | PTD | DIS | M1))/*DRD0*/\
	MUX_VAL(CP(MMC2_DAT5), (OFF_OUT_PD | IDIS | PTD | DIS | M1))/*DRD1*/\
	MUX_VAL(CP(MMC2_DAT6), (OFF_OUT_PD | IDIS | PTD | DIS | M1))/*DCMD*/\
	MUX_VAL(CP(MMC2_DAT7), (OFF_IN_PD | IEN | PTU | EN | M1))/*CLKIN*/\
	/*Bluetooth*/\
	MUX_VAL(CP(MCBSP3_DX), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(MCBSP3_DR), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(MCBSP3_CLKX), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(MCBSP3_FSX), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(UART2_CTS), (OFF_IN_PD | IEN | PTU | EN | M0))\
	MUX_VAL(CP(UART2_RTS), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(UART2_TX), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(UART2_RX), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	/*Modem Interface */\
	MUX_VAL(CP(UART1_TX), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(UART1_RTS), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(UART1_CTS), (OFF_IN_PD | IEN | PTU | DIS | M0))\
	MUX_VAL(CP(UART1_RX), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(MCBSP4_CLKX), (OFF_IN_PD | IEN | PTD | DIS | M1))/*SSI1DRX*/\
	MUX_VAL(CP(MCBSP4_DR), (OFF_IN_PD | IEN | PTD | DIS | M1))/*SSI1FLGRX*/\
	MUX_VAL(CP(MCBSP4_DX), (OFF_IN_PD | IEN | PTD | DIS | M1))/*SSI1RDYRX*/\
	MUX_VAL(CP(MCBSP4_FSX), (OFF_IN_PD | IEN | PTD | DIS | M1))/*SSI1WAKE*/\
	MUX_VAL(CP(MCBSP1_CLKR), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(MCBSP1_FSR), (OFF_OUT_PD | IDIS | PTU | EN | M4))/*G157BWP*/\
	MUX_VAL(CP(MCBSP1_DX), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(MCBSP1_DR), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(MCBSP_CLKS), (OFF_IN_PD | IEN | PTU | DIS | M0))\
	MUX_VAL(CP(MCBSP1_FSX), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(MCBSP1_CLKX), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	/*Serial Interface*/\
	MUX_VAL(CP(UART3_CTS_RCTX), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(UART3_RTS_SD), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(UART3_RX_IRRX), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(UART3_TX_IRTX), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(HSUSB0_CLK), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(HSUSB0_STP), (OFF_OUT_PD | IDIS | PTU | EN | M0))\
	MUX_VAL(CP(HSUSB0_DIR), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(HSUSB0_NXT), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(HSUSB0_DATA0), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(HSUSB0_DATA1), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(HSUSB0_DATA2), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(HSUSB0_DATA3), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(HSUSB0_DATA4), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(HSUSB0_DATA5), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(HSUSB0_DATA6), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(HSUSB0_DATA7), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	/* NOTE db: removed off-mode from I2C 1/2/3 ... external pullups!! */\
	MUX_VAL(CP(I2C1_SCL), (IEN | PTU | EN | M0))\
	MUX_VAL(CP(I2C1_SDA), (IEN | PTU | EN | M0))\
	MUX_VAL(CP(I2C2_SCL), (IEN | PTU | EN | M0))\
	MUX_VAL(CP(I2C2_SDA), (IEN | PTU | EN | M0))\
	MUX_VAL(CP(I2C3_SCL), (IEN | PTU | EN | M0))\
	MUX_VAL(CP(I2C3_SDA), (IEN | PTU | EN | M0))\
	MUX_VAL(CP(I2C4_SCL), (IEN | PTU | EN | M0))\
	MUX_VAL(CP(I2C4_SDA), (IEN | PTU | EN | M0))\
	MUX_VAL(CP(HDQ_SIO), (OFF_IN_PD | IEN | PTU | EN | M0))\
	MUX_VAL(CP(MCSPI1_CLK), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(MCSPI1_SIMO), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(MCSPI1_SOMI), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(MCSPI1_CS0), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(MCSPI1_CS1), (OFF_OUT_PD | IDIS | PTD | EN | M0))\
	MUX_VAL(CP(MCSPI1_CS2), (OFF_OUT_PD | IDIS | PTD | DIS | M4))/*G176*/\
	MUX_VAL(CP(MCSPI1_CS3), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(MCSPI2_CLK), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(MCSPI2_SIMO), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(MCSPI2_SOMI), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(MCSPI2_CS0), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(MCSPI2_CS1), (OFF_IN_PD | IEN | PTD | EN | M0))\
	/*Control and debug */\
	MUX_VAL(CP(SYS_32K), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SYS_CLKREQ), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SYS_NIRQ), (OFF_IN_PD | IEN | PTU | EN | M0))\
	MUX_VAL(CP(SYS_BOOT0), (OFF_OUT_PD | IEN | PTD | DIS | M4))/*G2PENIRQ*/\
	MUX_VAL(CP(SYS_BOOT1), (OFF_OUT_PD | IEN | PTD | DIS | M4))/*GPIO_3 */\
	MUX_VAL(CP(SYS_BOOT2), (OFF_OUT_PD | IEN | PTD | DIS | M4))/*G4MMC1WP*/\
	MUX_VAL(CP(SYS_BOOT3), (OFF_OUT_PD | IEN | PTD | DIS | M4))/*G5LCDENV*/\
	MUX_VAL(CP(SYS_BOOT4), (OFF_OUT_PD | IEN | PTD | DIS | M4))/*G6LANINT*/\
	MUX_VAL(CP(SYS_BOOT5), (OFF_OUT_PD | IEN | PTD | DIS | M4))/*G7MMC2WP*/\
	MUX_VAL(CP(SYS_BOOT6), (OFF_OUT_PD | IDIS | PTD | DIS | M4))/*G8ENBKL*/\
	MUX_VAL(CP(SYS_OFF_MODE), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SYS_CLKOUT1), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SYS_CLKOUT2), (OFF_IN_PD | IEN | PTU | EN | M4))/*GPIO_186*/\
	MUX_VAL(CP(JTAG_nTRST), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(JTAG_TCK), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(JTAG_TMS), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(JTAG_TDI), (IEN | PTD | DIS | M0))\
	MUX_VAL(CP(JTAG_EMU0), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(JTAG_EMU1), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(ETK_CLK_ES2), (OFF_OUT_PD | IDIS | PTU | EN | M0))\
	MUX_VAL(CP(ETK_CTL_ES2), (OFF_OUT_PD | IDIS | PTD | DIS | M0))\
	MUX_VAL(CP(ETK_D0_ES2), (OFF_IN_PD | IEN | PTD | DIS | M1))/*USB1TLD0*/\
	MUX_VAL(CP(ETK_D1_ES2), (OFF_IN_PD | IEN | PTD | DIS | M1))/*SPI3_CS0*/\
	MUX_VAL(CP(ETK_D2_ES2), (OFF_IN_PD | IEN | PTD | EN | M1))/*USB1TLD2*/\
	MUX_VAL(CP(ETK_D3_ES2), (OFF_IN_PD | IEN | PTD | DIS | M1))/*USB1TLD7*/\
	MUX_VAL(CP(ETK_D4_ES2), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(ETK_D5_ES2), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(ETK_D6_ES2), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(ETK_D7_ES2), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(ETK_D8_ES2), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(ETK_D9_ES2), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(ETK_D10_ES2), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(ETK_D11_ES2), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(ETK_D12_ES2), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(ETK_D13_ES2), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(ETK_D14_ES2), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(ETK_D15_ES2), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	/*Die to Die */\
	MUX_VAL(CP(D2D_MCAD0), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD1), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD2), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD3), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD4), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD5), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD6), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD7), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD8), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD9), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD10), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD11), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD12), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD13), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD14), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD15), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD16), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD17), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD18), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD19), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD20), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD21), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD22), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD23), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD24), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD25), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD26), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD27), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD28), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD29), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD30), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD31), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD32), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD33), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD34), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD35), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_MCAD36), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_CLK26MI), (OFF_OUT_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(D2D_NRESPWRON), (OFF_OUT_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_NRESWARM), (OFF_IN_PD | IEN | PTU | EN | M0))\
	MUX_VAL(CP(D2D_ARM9NIRQ), (OFF_OUT_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(D2D_UMA2P6FIQ), (OFF_OUT_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(D2D_SPINT), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_FRINT), (OFF_IN_PD | IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_DMAREQ0), (OFF_OUT_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(D2D_DMAREQ1), (OFF_OUT_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(D2D_DMAREQ2), (OFF_OUT_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(D2D_DMAREQ3), (OFF_OUT_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(D2D_N3GTRST), (OFF_OUT_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(D2D_N3GTDI), (OFF_OUT_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(D2D_N3GTDO), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(D2D_N3GTMS), (OFF_OUT_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(D2D_N3GTCK), (OFF_OUT_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(D2D_N3GRTCK), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(D2D_MSTDBY), (OFF_IN_PD | IEN | PTU | EN | M0))\
	MUX_VAL(CP(D2D_SWAKEUP), (IEN | PTD | EN | M0))\
	MUX_VAL(CP(D2D_IDLEREQ), (OFF_OUT_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(D2D_IDLEACK), (OFF_IN_PD | IEN | PTU | EN | M0))\
	MUX_VAL(CP(D2D_MWRITE), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(D2D_SWRITE), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(D2D_MREAD), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(D2D_SREAD), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(D2D_MBUSFLAG), (OFF_IN_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(D2D_SBUSFLAG), (OFF_OUT_PD | IEN | PTD | DIS | M0))\
	MUX_VAL(CP(SDRC_CKE0), (IDIS | PTU | EN | M0))\
	MUX_VAL(CP(SDRC_CKE1), (IDIS | PTD | DIS | M7)) /*SDRC_CKE1 NOT USED*/

/*
 * GPMC Timing definitions for SDP3430
 * at L3 = 166Mhz
 */

/* Timing definitions for GPMC controller for Sibley NOR */
#define SDP3430_NOR_GPMC_CONF1 0x00001200
#define SDP3430_NOR_GPMC_CONF2 0x001F1F00
#define SDP3430_NOR_GPMC_CONF3 0x00080802
#define SDP3430_NOR_GPMC_CONF4 0x1C091C09
#define SDP3430_NOR_GPMC_CONF5 0x01131F1F
#define SDP3430_NOR_GPMC_CONF6 0x1F0F03C2

/*
 * Timing definitions for GPMC controller for Debug Board
 * Debug board contains access to ethernet and DIP Switch setting
 * information etc.
 */
#define SDP3430_DEBUG_GPMC_CONF1 0x00611200
#define SDP3430_DEBUG_GPMC_CONF2 0x001F1F01
#define SDP3430_DEBUG_GPMC_CONF3 0x00080803
#define SDP3430_DEBUG_GPMC_CONF4 0x1D091D09
#define SDP3430_DEBUG_GPMC_CONF5 0x041D1F1F
#define SDP3430_DEBUG_GPMC_CONF6 0x1D0904C4

/* Timing defintions for GPMC OneNAND */
#define SDP3430_ONENAND_GPMC_CONF1 0x00001200
#define SDP3430_ONENAND_GPMC_CONF2 0x000F0F01
#define SDP3430_ONENAND_GPMC_CONF3 0x00030301
#define SDP3430_ONENAND_GPMC_CONF4 0x0F040F04
#define SDP3430_ONENAND_GPMC_CONF5 0x010F1010
#define SDP3430_ONENAND_GPMC_CONF6 0x1F060000

/* GPMC definitions for GPMC NAND */
#define SDP3430_NAND_GPMC_CONF1 0x00000800
#define SDP3430_NAND_GPMC_CONF2 0x00141400
#define SDP3430_NAND_GPMC_CONF3 0x00141400
#define SDP3430_NAND_GPMC_CONF4 0x0F010F01
#define SDP3430_NAND_GPMC_CONF5 0x010C1414
#define SDP3430_NAND_GPMC_CONF6 0x1F040A80

#endif /* _BOARD_SDP_H_ */
