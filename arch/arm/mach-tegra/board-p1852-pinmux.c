/*
 * arch/arm/mach-tegra/board-p1852-pinmux.c
 *
 * Copyright (C) 2010-2012 NVIDIA Corporation
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
#include "board.h"
#include "board-p1852.h"
#include "gpio-names.h"

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
/* Setting the drive strength of pins
 * hsm: Enable High speed mode (ENABLE/DISABLE)
 * Schimit: Enable/disable schimit (ENABLE/DISABLE)
 * drive: low power mode (DIV_1, DIV_2, DIV_4, DIV_8)
 * pulldn_drive - drive down (falling edge) - Driver Output Pull-Down drive
 *                strength code. Value from 0 to 31.
 * pullup_drive - drive up (rising edge)  - Driver Output Pull-Up drive
 *                strength code. Value from 0 to 31.
 * pulldn_slew -  Driver Output Pull-Up slew control code  - 2bit code
 *                code 11 is least slewing of signal. code 00 is highest
 *                slewing of the signal.
 *                Value - FASTEST, FAST, SLOW, SLOWEST
 * pullup_slew -  Driver Output Pull-Down slew control code -
 *                code 11 is least slewing of signal. code 00 is highest
 *                slewing of the signal.
 *                Value - FASTEST, FAST, SLOW, SLOWEST
 */
#define SET_DRIVE(_name, _hsm, _schmitt, _drive, _pulldn_drive, _pullup_drive, _pulldn_slew, _pullup_slew) \
	{                                               \
		.pingroup = TEGRA_DRIVE_PINGROUP_##_name,   \
		.hsm = TEGRA_HSM_##_hsm,                    \
		.schmitt = TEGRA_SCHMITT_##_schmitt,        \
		.drive = TEGRA_DRIVE_##_drive,              \
		.pull_down = TEGRA_PULL_##_pulldn_drive,    \
		.pull_up = TEGRA_PULL_##_pullup_drive,		\
		.slew_rising = TEGRA_SLEW_##_pulldn_slew,   \
		.slew_falling = TEGRA_SLEW_##_pullup_slew,	\
	}

/* !!!FIXME!!!!  Update drive strength with characterized value  */
static __initdata struct tegra_drive_pingroup_config p1852_drive_pinmux[] = {
	SET_DRIVE(DAP2,	DISABLE, ENABLE, DIV_1, 31, 31, FASTEST, FASTEST),

	/* All I2C pins are driven to maximum drive strength */
	/* GEN1 I2C */
	SET_DRIVE(DBG,	DISABLE, ENABLE, DIV_1, 31, 31, FASTEST, FASTEST),

	/* GEN2 I2C */
	SET_DRIVE(AT5,	DISABLE, ENABLE, DIV_1, 31, 31, FASTEST, FASTEST),

	/* DDC I2C */
	SET_DRIVE(DDC,	DISABLE, ENABLE, DIV_1, 31, 31, FASTEST, FASTEST),

	/* PWR_I2C */
	SET_DRIVE(AO1,	DISABLE, ENABLE, DIV_1, 31, 31, FASTEST, FASTEST),

	/* SDMMC4 */
	SET_DRIVE(GME,	DISABLE, ENABLE, DIV_1, 22, 18, SLOWEST, SLOWEST),
	SET_DRIVE(GMF,	DISABLE, ENABLE, DIV_1,  0,  0, SLOWEST, SLOWEST),
	SET_DRIVE(GMG,	DISABLE, ENABLE, DIV_1, 15,  6, SLOWEST, SLOWEST),
	SET_DRIVE(GMH,	DISABLE, ENABLE, DIV_1, 12,  6, SLOWEST, SLOWEST),
};

#define DEFAULT_PINMUX(_pingroup, _mux, _pupd, _tri, _io)	\
	{							\
		.pingroup	= TEGRA_PINGROUP_##_pingroup,	\
		.func		= TEGRA_MUX_##_mux,		\
		.pupd		= TEGRA_PUPD_##_pupd,		\
		.tristate	= TEGRA_TRI_##_tri,		\
		.io		= TEGRA_PIN_##_io,		\
		.lock		= TEGRA_PIN_LOCK_DEFAULT,	\
		.od		= TEGRA_PIN_OD_DEFAULT,		\
		.ioreset	= TEGRA_PIN_IO_RESET_DEFAULT,	\
	}

#define I2C_PINMUX(_pingroup, _mux, _pupd, _tri, _io, _lock, _od) \
	{							\
		.pingroup	= TEGRA_PINGROUP_##_pingroup,	\
		.func		= TEGRA_MUX_##_mux,		\
		.pupd		= TEGRA_PUPD_##_pupd,		\
		.tristate	= TEGRA_TRI_##_tri,		\
		.io		= TEGRA_PIN_##_io,		\
		.lock		= TEGRA_PIN_LOCK_##_lock,	\
		.od		= TEGRA_PIN_OD_##_od,		\
		.ioreset	= TEGRA_PIN_IO_RESET_DEFAULT,	\
	}

#define VI_PINMUX(_pingroup, _mux, _pupd, _tri, _io, _lock, _ioreset) \
	{							\
		.pingroup	= TEGRA_PINGROUP_##_pingroup,	\
		.func		= TEGRA_MUX_##_mux,		\
		.pupd		= TEGRA_PUPD_##_pupd,		\
		.tristate	= TEGRA_TRI_##_tri,		\
		.io		= TEGRA_PIN_##_io,		\
		.lock		= TEGRA_PIN_LOCK_##_lock,	\
		.od		= TEGRA_PIN_OD_DEFAULT,		\
		.ioreset	= TEGRA_PIN_IO_RESET_##_ioreset	\
	}

static __initdata struct tegra_pingroup_config p1852_pinmux_common[] = {
	/* SDMMC1 pinmux */
	DEFAULT_PINMUX(SDMMC1_CLK,	SDMMC1,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(SDMMC1_CMD,	SDMMC1,		PULL_UP,	NORMAL,		INPUT),
	DEFAULT_PINMUX(SDMMC1_DAT3,	SDMMC1,		PULL_UP,	NORMAL,		INPUT),
	DEFAULT_PINMUX(SDMMC1_DAT2,	SDMMC1,		PULL_UP,	NORMAL,		INPUT),
	DEFAULT_PINMUX(SDMMC1_DAT1,	SDMMC1,		PULL_UP,	NORMAL,		INPUT),
	DEFAULT_PINMUX(SDMMC1_DAT0,	SDMMC1,		PULL_UP,	NORMAL,		INPUT),

	/* SDMMC2 pinmux */
	DEFAULT_PINMUX(KB_ROW10,	SDMMC2,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(KB_ROW11,	SDMMC2,		PULL_UP,	NORMAL,		INPUT),
	DEFAULT_PINMUX(KB_ROW12,	SDMMC2,		PULL_UP,	NORMAL,		INPUT),
	DEFAULT_PINMUX(KB_ROW13,	SDMMC2,		PULL_UP,	NORMAL,		INPUT),
	DEFAULT_PINMUX(KB_ROW14,	SDMMC2,		PULL_UP,	NORMAL,		INPUT),
	DEFAULT_PINMUX(KB_ROW15,	SDMMC2,		PULL_UP,	NORMAL,		INPUT),
	DEFAULT_PINMUX(KB_ROW6,		SDMMC2,		PULL_UP,	NORMAL,		INPUT),
	DEFAULT_PINMUX(KB_ROW7,		SDMMC2,		PULL_UP,	NORMAL,		INPUT),
	DEFAULT_PINMUX(KB_ROW8,		SDMMC2,		PULL_UP,	NORMAL,		INPUT),
	DEFAULT_PINMUX(KB_ROW9,		SDMMC2,		PULL_UP,	NORMAL,		INPUT),

	/* SDMMC3 pinmux */
	DEFAULT_PINMUX(SDMMC3_CLK,	SDMMC3,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(SDMMC3_CMD,	SDMMC3,		PULL_UP,	NORMAL,		INPUT),
	DEFAULT_PINMUX(SDMMC3_DAT0,	SDMMC3,		PULL_UP,	NORMAL,		INPUT),
	DEFAULT_PINMUX(SDMMC3_DAT1,	SDMMC3,		PULL_UP,	NORMAL,		INPUT),
	DEFAULT_PINMUX(SDMMC3_DAT2,	SDMMC3,		PULL_UP,	NORMAL,		INPUT),
	DEFAULT_PINMUX(SDMMC3_DAT3,	SDMMC3,		PULL_UP,	NORMAL,		INPUT),

	/* SDMMC4 pinmux */
	DEFAULT_PINMUX(CAM_MCLK,	POPSDMMC4,	NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(GPIO_PCC1,	POPSDMMC4,	NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(GPIO_PBB0,	POPSDMMC4,	PULL_UP,	NORMAL,		INPUT),
	I2C_PINMUX(CAM_I2C_SCL,		POPSDMMC4,	PULL_UP,	NORMAL,		INPUT,		DISABLE,	DISABLE),
	I2C_PINMUX(CAM_I2C_SDA,		POPSDMMC4,	PULL_UP,	NORMAL,		INPUT,		DISABLE,	DISABLE),
	DEFAULT_PINMUX(GPIO_PBB3,	POPSDMMC4,	PULL_UP,	NORMAL,		INPUT),
	DEFAULT_PINMUX(GPIO_PBB4,	POPSDMMC4,	PULL_UP,	NORMAL,		INPUT),
	DEFAULT_PINMUX(GPIO_PBB5,	POPSDMMC4,	PULL_UP,	NORMAL,		INPUT),
	DEFAULT_PINMUX(GPIO_PBB6,	POPSDMMC4,	PULL_UP,	NORMAL,		INPUT),
	DEFAULT_PINMUX(GPIO_PBB7,	POPSDMMC4,	PULL_UP,	NORMAL,		INPUT),

	/* UART1 pinmux */
	DEFAULT_PINMUX(ULPI_DATA0,	UARTA,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(ULPI_DATA1,	UARTA,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(ULPI_DATA2,	UARTA,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(ULPI_DATA3,	UARTA,		NORMAL,		NORMAL,		OUTPUT),

	/* UART2 pinmux */
	DEFAULT_PINMUX(UART2_RXD,	IRDA,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(UART2_TXD,	IRDA,		NORMAL,		NORMAL,		OUTPUT),

	/* UART5 pinmux */
	DEFAULT_PINMUX(SDMMC4_DAT0,	UARTE,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(SDMMC4_DAT1,	UARTE,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(SDMMC4_DAT2,	UARTE,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(SDMMC4_DAT3,	UARTE,		NORMAL,		NORMAL,		OUTPUT),

	/* I2C1 pinmux */
	I2C_PINMUX(GEN1_I2C_SCL,	I2C1,		NORMAL,		NORMAL,		INPUT,		DISABLE,	ENABLE),
	I2C_PINMUX(GEN1_I2C_SDA,	I2C1,		NORMAL,		NORMAL,		INPUT,		DISABLE,	ENABLE),

	/* I2C2 pinmux */
	I2C_PINMUX(GEN2_I2C_SCL,	I2C2,		NORMAL,		NORMAL,		INPUT,		DISABLE,	ENABLE),
	I2C_PINMUX(GEN2_I2C_SDA,	I2C2,		NORMAL,		NORMAL,		INPUT,		DISABLE,	ENABLE),

	/* I2C4 pinmux */
	I2C_PINMUX(DDC_SCL,		I2C4,		NORMAL,		NORMAL,		INPUT,		DISABLE,	ENABLE),
	I2C_PINMUX(DDC_SDA,		I2C4,		NORMAL,		NORMAL,		INPUT,		DISABLE,	ENABLE),

	/* PowerI2C pinmux */
	I2C_PINMUX(PWR_I2C_SCL,		I2CPWR,		NORMAL,		NORMAL,		INPUT,		DISABLE,	ENABLE),
	I2C_PINMUX(PWR_I2C_SDA,		I2CPWR,		NORMAL,		NORMAL,		INPUT,		DISABLE,	ENABLE),

	/* SPI1 pinmux */
	DEFAULT_PINMUX(ULPI_CLK,	SPI1,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(ULPI_DIR,	SPI1,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(ULPI_NXT,	SPI1,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(ULPI_STP,	SPI1,		NORMAL,		NORMAL,		INPUT),

	/* SPI2 pinmux */
	DEFAULT_PINMUX(ULPI_DATA4,	SPI2,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(ULPI_DATA5,	SPI2,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(ULPI_DATA6,	SPI2,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(ULPI_DATA7,	SPI2,		NORMAL,		NORMAL,		INPUT),

	/* SPI4 pinmux */
	DEFAULT_PINMUX(GMI_A16,		SPI4,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(GMI_A17,		SPI4,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(GMI_A18,		SPI4,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(GMI_A19,		SPI4,		NORMAL,		NORMAL,		INPUT),

	/* SPDIF pinmux */
	DEFAULT_PINMUX(SPDIF_IN,	SPDIF,		NORMAL,		NORMAL,		INPUT),

	/* DAP1 */
	DEFAULT_PINMUX(DAP1_FS,		I2S0,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(DAP1_DIN,	I2S0,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(DAP1_DOUT,	I2S0,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(DAP1_SCLK,	I2S0,		NORMAL,		NORMAL,		INPUT),

	/* DAP2 */
	DEFAULT_PINMUX(DAP3_FS,		I2S2,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(DAP3_DIN,	I2S2,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(DAP3_DOUT,	I2S2,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(DAP3_SCLK,	I2S2,		NORMAL,		NORMAL,		INPUT),

	/* DAP3 */
	DEFAULT_PINMUX(SDMMC4_DAT4,	I2S4,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(SDMMC4_DAT5,	I2S4,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(SDMMC4_DAT6,	I2S4,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(SDMMC4_DAT7,	I2S4,		NORMAL,		NORMAL,		INPUT),

	/* NOR pinmux */
	DEFAULT_PINMUX(GMI_AD0,		GMI,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(GMI_AD1,		GMI,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(GMI_AD2,		GMI,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(GMI_AD3,		GMI,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(GMI_AD4,		GMI,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(GMI_AD5,		GMI,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(GMI_AD6,		GMI,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(GMI_AD7,		GMI,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(GMI_AD8,		GMI,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(GMI_AD9,		GMI,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(GMI_AD10,	GMI,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(GMI_AD11,	GMI,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(GMI_AD12,	GMI,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(GMI_AD13,	GMI,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(GMI_AD14,	GMI,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(GMI_AD15,	GMI,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(GMI_ADV_N,	GMI,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(GMI_CLK,		GMI,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(GMI_CS0_N,	GMI,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(GMI_OE_N,	GMI,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(GMI_RST_N,	GMI,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(GMI_WAIT,	GMI,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(GMI_WP_N,	GMI,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(GMI_WR_N,	GMI,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(DAP2_FS,		GMI,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(DAP2_DIN,	GMI,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(DAP2_DOUT,	GMI,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(DAP2_SCLK,	GMI,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(SPI1_MOSI,	GMI,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(SPI2_CS0_N,	GMI,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(SPI2_SCK,	GMI,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(SPI2_MOSI,	GMI,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(SPI2_MISO,	GMI,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(DAP4_FS,		GMI,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(DAP4_DIN,	GMI,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(DAP4_DOUT,	GMI,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(DAP4_SCLK,	GMI,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(GPIO_PU0,	GMI,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(GPIO_PU1,	GMI,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(GPIO_PU2,	GMI,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(GPIO_PU3,	GMI,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(GPIO_PU4,	GMI,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(GPIO_PU5,	GMI,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(GPIO_PU6,	GMI,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(UART2_RTS_N,	GMI,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(UART2_CTS_N,	GMI,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(UART3_TXD,	GMI,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(UART3_RXD,	GMI,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(UART3_CTS_N,	GMI,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(UART3_RTS_N,	GMI,		NORMAL,		NORMAL,		OUTPUT),


	/* DISPLAY pinmux */
	DEFAULT_PINMUX(LCD_CS1_N,	DISPLAYA,	NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(LCD_D0,		DISPLAYA,	NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(LCD_D1,		DISPLAYA,	NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(LCD_D2,		DISPLAYA,	NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(LCD_D3,		DISPLAYA,	NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(LCD_D4,		DISPLAYA,	NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(LCD_D5,		DISPLAYA,	NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(LCD_D6,		DISPLAYA,	NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(LCD_D7,		DISPLAYA,	NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(LCD_D8,		DISPLAYA,	NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(LCD_D9,		DISPLAYA,	NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(LCD_D10,		DISPLAYA,	NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(LCD_D11,		DISPLAYA,	NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(LCD_D12,		DISPLAYA,	NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(LCD_D13,		DISPLAYA,	NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(LCD_D14,		DISPLAYA,	NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(LCD_D15,		DISPLAYA,	NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(LCD_D16,		DISPLAYA,	NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(LCD_D17,		DISPLAYA,	NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(LCD_D18,		DISPLAYA,	NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(LCD_D19,		DISPLAYA,	NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(LCD_D20,		DISPLAYA,	NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(LCD_D21,		DISPLAYA,	NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(LCD_D22,		DISPLAYA,	NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(LCD_D23,		DISPLAYA,	NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(LCD_DC0,		DISPLAYA,	NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(LCD_DE,		DISPLAYA,	NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(LCD_HSYNC,	DISPLAYA,	NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(LCD_PCLK,	DISPLAYA,	NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(LCD_VSYNC,	DISPLAYA,	NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(LCD_WR_N,	DISPLAYA,	NORMAL,		NORMAL,		INPUT),

	DEFAULT_PINMUX(PEX_WAKE_N,	PCIE,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(PEX_L1_PRSNT_N,	PCIE,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(PEX_L1_RST_N,	PCIE,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(PEX_L1_CLKREQ_N,	PCIE,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(PEX_L2_PRSNT_N,	PCIE,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(PEX_L2_RST_N,	PCIE,		NORMAL,		NORMAL,		OUTPUT),
	DEFAULT_PINMUX(PEX_L2_CLKREQ_N,	PCIE,		NORMAL,		NORMAL,		INPUT),

	VI_PINMUX(VI_D2,		VI,		NORMAL,		NORMAL,		INPUT,		DISABLE,	DISABLE),
	VI_PINMUX(VI_D3,		VI,		NORMAL,		NORMAL,		INPUT,		DISABLE,	DISABLE),
	VI_PINMUX(VI_D4,		VI,		NORMAL,		NORMAL,		OUTPUT,		DISABLE,	DISABLE),
	VI_PINMUX(VI_D5,		VI,		NORMAL,		NORMAL,		INPUT,		DISABLE,	DISABLE),
	VI_PINMUX(VI_D6,		VI,		NORMAL,		NORMAL,		OUTPUT,		DISABLE,	DISABLE),
	VI_PINMUX(VI_D7,		VI,		NORMAL,		NORMAL,		INPUT,		DISABLE,	DISABLE),
	VI_PINMUX(VI_D8,		VI,		NORMAL,		NORMAL,		INPUT,		DISABLE,	DISABLE),
	VI_PINMUX(VI_D9,		VI,		NORMAL,		NORMAL,		INPUT,		DISABLE,	DISABLE),
	VI_PINMUX(VI_PCLK,		VI,		PULL_UP,	TRISTATE,	INPUT,		DISABLE,	DISABLE),

	/* pin config for gpios */
	DEFAULT_PINMUX(VI_D0,		SAFE,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(CLK1_OUT,	RSVD1,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(CLK1_REQ,	RSVD2,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(LCD_SCK,		SPI5,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(LCD_DC1,		RSVD1,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(SDMMC3_DAT4,	SDMMC3,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(SDMMC3_DAT5,	SDMMC3,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(SPI2_CS1_N,	SPI2,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(SPDIF_OUT,	SAFE,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(SPI1_SCK,	SPI1,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(SPI1_CS0_N,	SPI1,		NORMAL,		NORMAL,		INPUT),
	DEFAULT_PINMUX(SPI1_MISO,	SAFE,		NORMAL,		NORMAL,		INPUT),
};

int __init p1852_pinmux_init(void)
{
	tegra_pinmux_config_table(p1852_pinmux_common,
					ARRAY_SIZE(p1852_pinmux_common));
	tegra_drive_pinmux_config_table(p1852_drive_pinmux,
			ARRAY_SIZE(p1852_drive_pinmux));
	return 0;
}

static struct gpio p1852_sku8_gpios[] = {
	{TEGRA_GPIO_PW4,	GPIOF_OUT_INIT_HIGH,	"w4"},
	{TEGRA_GPIO_PEE2,	GPIOF_OUT_INIT_HIGH,	"ee2"},
	{TEGRA_GPIO_PZ4,	GPIOF_OUT_INIT_HIGH,	"z4"},
	{TEGRA_GPIO_PD2,	GPIOF_OUT_INIT_HIGH,	"d2"},
	{TEGRA_GPIO_PD1,	GPIOF_OUT_INIT_HIGH,	"d1"},
	{TEGRA_GPIO_PD0,	GPIOF_OUT_INIT_HIGH,	"d0"},
	{TEGRA_GPIO_PW2,	GPIOF_IN,		"therm_alert"},
	{TEGRA_GPIO_PK5,	GPIOF_OUT_INIT_HIGH,	"user1"},
	{TEGRA_GPIO_PX5,	GPIOF_OUT_INIT_HIGH,	"user2"},
	{TEGRA_GPIO_PX6,	GPIOF_OUT_INIT_HIGH,	"user3"},
	{TEGRA_GPIO_PX7,	GPIOF_OUT_INIT_HIGH,	"user4"},
};

int __init p1852_gpio_init(void)
{
	int i, pin_count = 0;
	struct gpio *gpios_info = NULL;
	gpios_info = p1852_sku8_gpios;
	pin_count = ARRAY_SIZE(p1852_sku8_gpios);

	gpio_request_array(gpios_info, pin_count);
	for (i = 0; i < pin_count; i++) {
		tegra_gpio_enable(gpios_info[i].gpio);
		gpio_export(gpios_info[i].gpio, true);
	}
	return 0;
}
