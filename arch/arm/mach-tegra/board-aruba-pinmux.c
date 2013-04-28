/*
 * arch/arm/mach-tegra/board-aruba-pinmux.c
 *
 * Copyright (C) 2010 NVIDIA Corporation
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#include <linux/kernel.h>
#include <linux/init.h>
#include <mach/pinmux.h>

#define DEFAULT_DRIVE(_name)					\
	{							\
		.pingroup = TEGRA_DRIVE_PINGROUP_##_name,	\
		.hsm = TEGRA_HSM_DISABLE,			\
		.schmitt = TEGRA_SCHMITT_ENABLE,		\
		.drive = TEGRA_DRIVE_DIV_1,			\
		.pull_down = TEGRA_PULL_31,			\
		.pull_up = TEGRA_PULL_31,			\
		.slew_rising = TEGRA_SLEW_SLOWEST,		\
		.slew_falling = TEGRA_SLEW_SLOWEST,		\
	}


// !!!FIXME!!!! POPULATE THIS TABLE
static __initdata struct tegra_drive_pingroup_config aruba_drive_pinmux[] = {
	/* DEFAULT_DRIVE(<pin_group>), */
};

#define DEFAULT_PINMUX(_pingroup, _mux, _pupd, _tri, _io)	\
	{							\
		.pingroup	= TEGRA_PINGROUP_##_pingroup,	\
		.func		= TEGRA_MUX_##_mux,		\
		.pupd		= TEGRA_PUPD_##_pupd,		\
		.tristate	= TEGRA_TRI_##_tri,		\
		.io		= TEGRA_PIN_##_io,		\
	}

// !!!FIXME!!!! POPULATE THIS TABLE
static __initdata struct tegra_pingroup_config aruba_pinmux[] = {
	DEFAULT_PINMUX(ULPI_DATA0,      UARTA,           NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(ULPI_DATA1,      UARTA,           NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(ULPI_DATA2,      UARTA,           NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(ULPI_DATA3,      UARTA,           NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(ULPI_DATA4,      UARTA,           NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(ULPI_DATA5,      UARTA,           NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(ULPI_DATA6,      UARTA,           NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(ULPI_DATA7,      UARTA,           NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(ULPI_CLK,        UARTD,           NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(ULPI_DIR,        UARTD,           NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(ULPI_NXT,        UARTD,           NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(ULPI_STP,        UARTD,           NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(DAP3_FS,         I2S2,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(DAP3_DIN,        I2S2,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(DAP3_DOUT,       I2S2,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(DAP3_SCLK,       I2S2,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SDMMC1_CLK,      SDMMC1,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SDMMC1_CMD,      SDMMC1,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SDMMC1_DAT3,     SDMMC1,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SDMMC1_DAT2,     SDMMC1,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SDMMC1_DAT1,     SDMMC1,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SDMMC1_DAT0,     SDMMC1,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GPIO_PV2,        OWR,             NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(GPIO_PV3,        CLK12,           NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(CLK2_OUT,        EXTPERIPH2,      NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(CLK2_REQ,        DAP,             NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_PWR1,        DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_PWR2,        DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_SDIN,        DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_SDOUT,       DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_WR_N,        DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_CS0_N,       DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_DC0,         DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_SCK,         DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_PWR0,        DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_PCLK,        DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_DE,          DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_HSYNC,       DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_VSYNC,       DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_D0,          DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_D1,          DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_D2,          DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_D3,          DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_D4,          DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_D5,          DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_D6,          DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_D7,          DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_D8,          DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_D9,          DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_D10,         DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_D11,         DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_D12,         DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_D13,         DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_D14,         DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_D15,         DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_D16,         DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_D17,         DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_D18,         DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_D19,         DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_D20,         DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_D21,         DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_D22,         DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_D23,         DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_CS1_N,       DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_M1,          DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(LCD_DC1,         DISPLAYA,        NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(DDC_SCL,         I2C4,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(DDC_SDA,         I2C4,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(CRT_HSYNC,       CRT,             NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(CRT_VSYNC,       CRT,             NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(VI_D0,           RSVD1,           NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(VI_D1,           SDMMC2,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(VI_D2,           SDMMC2,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(VI_D3,           SDMMC2,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(VI_D4,           SDMMC2,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(VI_D5,           SDMMC2,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(VI_D6,           SDMMC2,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(VI_D7,           SDMMC2,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(VI_D8,           SDMMC2,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(VI_D9,           SDMMC2,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(VI_D10,          RSVD1,           NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(VI_D11,          RSVD1,           NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(VI_PCLK,         SDMMC2,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(VI_MCLK,         VI,              NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(VI_VSYNC,        RSVD1,           NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(VI_HSYNC,        RSVD1,           NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(UART2_RXD,       IRDA,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(UART2_TXD,       IRDA,            NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(UART2_RTS_N,     GMI,             NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(UART2_CTS_N,     GMI,             NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(UART3_TXD,       UARTC,           NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(UART3_RXD,       UARTC,           NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(UART3_CTS_N,     UARTC,           NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(UART3_RTS_N,     UARTC,           NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(GPIO_PU0,        RSVD1,           NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GPIO_PU1,        RSVD1,           NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GPIO_PU2,        RSVD1,           NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GPIO_PU3,        PWM0,            NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(GPIO_PU4,        PWM1,            NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(GPIO_PU5,        PWM2,            NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(GPIO_PU6,        PWM3,            NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(GEN1_I2C_SDA,    I2C1,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GEN1_I2C_SCL,    I2C1,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(DAP4_FS,         I2S3,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(DAP4_DIN,        I2S3,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(DAP4_DOUT,       I2S3,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(DAP4_SCLK,       I2S3,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(CLK3_OUT,        EXTPERIPH3,      NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(CLK3_REQ,        DEV3,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GMI_WP_N,        RSVD1,           NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GMI_IORDY,       NAND,            NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(GMI_WAIT,        NAND,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GMI_ADV_N,       NAND,            NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(GMI_CLK,         NAND,            NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(GMI_CS0_N,       NAND,            NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(GMI_CS1_N,       NAND,            NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(GMI_CS2_N,       NAND,            NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(GMI_CS3_N,       NAND,            NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(GMI_CS4_N,       NAND,            NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(GMI_CS6_N,       NAND_ALT,        NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(GMI_CS7_N,       NAND_ALT,        NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(GMI_AD0,         NAND,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GMI_AD1,         NAND,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GMI_AD2,         NAND,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GMI_AD3,         NAND,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GMI_AD4,         NAND,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GMI_AD5,         NAND,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GMI_AD6,         NAND,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GMI_AD7,         NAND,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GMI_AD8,         NAND,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GMI_AD9,         NAND,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GMI_AD10,        NAND,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GMI_AD11,        NAND,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GMI_AD12,        NAND,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GMI_AD13,        NAND,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GMI_AD14,        NAND,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GMI_AD15,        NAND,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GMI_A16,         UARTD,           NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(GMI_A17,         UARTD,           NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GMI_A18,         UARTD,           NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GMI_A19,         UARTD,           NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(GMI_WR_N,        NAND,            NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(GMI_OE_N,        NAND,            NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(GMI_DQS,         NAND,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GMI_RST_N,       RSVD3,           NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GEN2_I2C_SCL,    I2C2,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GEN2_I2C_SDA,    I2C2,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SDMMC4_CLK,      SDMMC4,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SDMMC4_CMD,      SDMMC4,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SDMMC4_DAT0,     SDMMC4,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SDMMC4_DAT1,     SDMMC4,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SDMMC4_DAT2,     SDMMC4,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SDMMC4_DAT3,     SDMMC4,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SDMMC4_DAT4,     SDMMC4,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SDMMC4_DAT5,     SDMMC4,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SDMMC4_DAT6,     SDMMC4,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SDMMC4_DAT7,     SDMMC4,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SDMMC4_RST_N,    RSVD1,           NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(CAM_MCLK,        VI,              NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GPIO_PCC1,       RSVD1,           NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GPIO_PBB0,       RSVD1,           NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(CAM_I2C_SCL,     I2C3,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(CAM_I2C_SDA,     I2C3,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GPIO_PBB3,       VGP3,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GPIO_PBB4,       VGP4,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GPIO_PBB5,       VGP5,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GPIO_PBB6,       VGP6,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GPIO_PBB7,       I2S4,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(GPIO_PCC2,       I2S4,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(JTAG_RTCK,       RTCK,            NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(PWR_I2C_SCL,     I2CPWR,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(PWR_I2C_SDA,     I2CPWR,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(KB_ROW0,         KBC,             NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(KB_ROW1,         KBC,             NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(KB_ROW2,         KBC,             NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(KB_ROW3,         KBC,             NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(KB_ROW4,         KBC,             NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(KB_ROW5,         KBC,             NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(KB_ROW6,         KBC,             NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(KB_ROW7,         KBC,             NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(KB_ROW8,         KBC,             NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(KB_ROW9,         KBC,             NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(KB_ROW10,        KBC,             NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(KB_ROW11,        KBC,             NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(KB_ROW12,        KBC,             NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(KB_ROW13,        KBC,             NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(KB_ROW14,        KBC,             NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(KB_ROW15,        KBC,             NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(KB_COL0,         KBC,             NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(KB_COL1,         KBC,             NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(KB_COL2,         KBC,             NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(KB_COL3,         KBC,             NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(KB_COL4,         KBC,             NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(KB_COL5,         KBC,             NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(KB_COL6,         KBC,             NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(KB_COL7,         KBC,             NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(CLK_32K_OUT,     BLINK,           NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(SYS_CLK_REQ,     SYSCLK,          NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(OWR,             OWR,             NORMAL,    NORMAL,     INPUT),
#ifdef CONFIG_SND_HDA_TEGRA
	DEFAULT_PINMUX(DAP1_FS,         HDA,             NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(DAP1_DIN,        HDA,             NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(DAP1_DOUT,       HDA,             NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(DAP1_SCLK,       HDA,             NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(CLK1_REQ,        DAP1,            NORMAL,    NORMAL,     INPUT),
#else
	DEFAULT_PINMUX(DAP1_FS,         I2S0,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(DAP1_DIN,        I2S0,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(DAP1_DOUT,       I2S0,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(DAP1_SCLK,       I2S0,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(CLK1_REQ,        DAP,             NORMAL,    NORMAL,     INPUT),
#endif
	DEFAULT_PINMUX(CLK1_OUT,        EXTPERIPH1,      NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SPDIF_IN,        SPDIF,           NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SPDIF_OUT,       SPDIF,           NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(DAP2_FS,         I2S1,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(DAP2_DIN,        I2S1,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(DAP2_DOUT,       I2S1,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(DAP2_SCLK,       I2S1,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SPI2_MOSI,       SPI6,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SPI2_MISO,       SPI6,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SPI2_CS0_N,      SPI6,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SPI2_SCK,        SPI6,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SPI1_MOSI,       SPI1,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SPI1_SCK,        SPI1,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SPI1_CS0_N,      SPI1,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SPI1_MISO,       SPI1,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SPI2_CS1_N,      SPI3,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SPI2_CS2_N,      SPI3,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SDMMC3_CLK,      SDMMC3,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SDMMC3_CMD,      SDMMC3,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SDMMC3_DAT0,     SDMMC3,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SDMMC3_DAT1,     SDMMC3,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SDMMC3_DAT2,     SDMMC3,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SDMMC3_DAT3,     SDMMC3,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SDMMC3_DAT4,     SDMMC3,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SDMMC3_DAT5,     SDMMC3,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SDMMC3_DAT6,     SDMMC3,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(SDMMC3_DAT7,     SDMMC3,          NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(PEX_L0_PRSNT_N,  PCIE,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(PEX_L0_RST_N,    PCIE,            NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(PEX_L0_CLKREQ_N, PCIE,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(PEX_WAKE_N,      PCIE,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(PEX_L1_PRSNT_N,  PCIE,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(PEX_L1_RST_N,    PCIE,            NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(PEX_L1_CLKREQ_N, PCIE,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(PEX_L2_PRSNT_N,  PCIE,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(PEX_L2_RST_N,    PCIE,            NORMAL,    NORMAL,     OUTPUT),
	DEFAULT_PINMUX(PEX_L2_CLKREQ_N, PCIE,            NORMAL,    NORMAL,     INPUT),
	DEFAULT_PINMUX(HDMI_CEC,        CEC,             NORMAL,    NORMAL,     INPUT),
};

void __init aruba_pinmux_init(void)
{
	tegra_pinmux_config_table(aruba_pinmux, ARRAY_SIZE(aruba_pinmux));
	tegra_drive_pinmux_config_table(aruba_drive_pinmux,
					ARRAY_SIZE(aruba_drive_pinmux));
}
