/*
 * arch/arm/mach-tegra/include/mach/i2s.h
 *
 * Copyright (C) 2010 Google, Inc.
 *
 * Author:
 *	Iliyan Malchev <malchev@google.com>
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

#ifndef __ARCH_ARM_MACH_TEGRA_I2S_H
#define __ARCH_ARM_MACH_TEGRA_I2S_H

#include <linux/kernel.h>
#include <linux/types.h>
#include <linux/platform_device.h>

/* Offsets from TEGRA_I2S1_BASE and TEGRA_I2S2_BASE */

#define I2S_I2S_CTRL_0			0
#define I2S_I2S_STATUS_0		4
#define I2S_I2S_TIMING_0		8
#define I2S_I2S_FIFO_SCR_0		0x0c
#define I2S_I2S_PCM_CTRL_0		0x10
#define I2S_I2S_NW_CTRL_0		0x14
#define I2S_I2S_TDM_CTRL_0		0x20
#define I2S_I2S_TDM_TX_RX_CTRL_0	0x24
#define I2S_I2S_FIFO1_0			0x40
#define I2S_I2S_FIFO2_0			0x80

/*
 * I2S_I2S_CTRL_0
 */

#define I2S_I2S_CTRL_FIFO2_TX_ENABLE		(1<<30)
#define I2S_I2S_CTRL_FIFO1_ENABLE		(1<<29)
#define I2S_I2S_CTRL_FIFO2_ENABLE		(1<<28)
#define I2S_I2S_CTRL_FIFO1_RX_ENABLE		(1<<27)
#define I2S_I2S_CTRL_FIFO_LPBK_ENABLE		(1<<26)
#define I2S_I2S_CTRL_MASTER_ENABLE		(1<<25)
#define I2S_I2S_CTRL_L_R_CTRL			(1<<24) /* 0 = L/R: low/high */

#define I2S_BIT_FORMAT_I2S 0
#define I2S_BIT_FORMAT_RJM 1
#define I2S_BIT_FORMAT_LJM 2
#define I2S_BIT_FORMAT_DSP 3
#define I2S_BIT_FORMAT_SHIFT 10

#define I2S_I2S_CTRL_BIT_FORMAT_MASK		(3<<10)
#define I2S_I2S_CTRL_BIT_FORMAT_I2S		(I2S_BIT_FORMAT_I2S<<10)
#define I2S_I2S_CTRL_BIT_FORMAT_RJM		(I2S_BIT_FORMAT_RJM<<10)
#define I2S_I2S_CTRL_BIT_FORMAT_LJM		(I2S_BIT_FORMAT_LJM<<10)
#define I2S_I2S_CTRL_BIT_FORMAT_DSP		(I2S_BIT_FORMAT_DSP<<10)

#define I2S_BIT_SIZE_16 0
#define I2S_BIT_SIZE_20 1
#define I2S_BIT_SIZE_24 2
#define I2S_BIT_SIZE_32 3
#define I2S_BIT_SIZE_SHIFT 8

#define I2S_I2S_CTRL_BIT_SIZE_MASK	(3 << I2S_BIT_SIZE_SHIFT)
#define I2S_I2S_CTRL_BIT_SIZE_16	(I2S_BIT_SIZE_16 << I2S_BIT_SIZE_SHIFT)
#define I2S_I2S_CTRL_BIT_SIZE_20	(I2S_BIT_SIZE_20 << I2S_BIT_SIZE_SHIFT)
#define I2S_I2S_CTRL_BIT_SIZE_24	(I2S_BIT_SIZE_24 << I2S_BIT_SIZE_SHIFT)
#define I2S_I2S_CTRL_BIT_SIZE_32	(I2S_BIT_SIZE_32 << I2S_BIT_SIZE_SHIFT)

#define I2S_FIFO_16_LSB 0
#define I2S_FIFO_20_LSB 1
#define I2S_FIFO_24_LSB 2
#define I2S_FIFO_32     3
#define I2S_FIFO_PACKED 7
#define I2S_FIFO_SHIFT  4

#define I2S_I2S_CTRL_FIFO_FORMAT_MASK		(7<<4)
#define I2S_I2S_CTRL_FIFO_FORMAT_16_LSB		\
		(I2S_FIFO_16_LSB << I2S_FIFO_SHIFT)
#define I2S_I2S_CTRL_FIFO_FORMAT_20_LSB		\
		(I2S_FIFO_20_LSB << I2S_FIFO_SHIFT)
#define I2S_I2S_CTRL_FIFO_FORMAT_24_LSB		\
		(I2S_FIFO_24_LSB << I2S_FIFO_SHIFT)
#define I2S_I2S_CTRL_FIFO_FORMAT_32		\
		(I2S_FIFO_32 << I2S_FIFO_SHIFT)
#define I2S_I2S_CTRL_FIFO_FORMAT_PACKED		\
		(I2S_FIFO_PACKED << I2S_FIFO_SHIFT)

#define I2S_I2S_IE_FIFO1_ERR			(1<<3)
#define I2S_I2S_IE_FIFO2_ERR			(1<<2)
#define I2S_I2S_QE_FIFO1			(1<<1)
#define I2S_I2S_QE_FIFO2			(1<<0)

/*
 * I2S_I2S_STATUS_0
 */

#define I2S_I2S_STATUS_FIFO1_RDY		(1<<31)
#define I2S_I2S_STATUS_FIFO2_RDY		(1<<30)
#define I2S_I2S_STATUS_FIFO1_BSY		(1<<29)
#define I2S_I2S_STATUS_FIFO2_BSY		(1<<28)
#define I2S_I2S_STATUS_FIFO1_ERR		(1<<3)
#define I2S_I2S_STATUS_FIFO2_ERR		(1<<2)
#define I2S_I2S_STATUS_QS_FIFO1			(1<<1)
#define I2S_I2S_STATUS_QS_FIFO2			(1<<0)

/*
 * I2S_I2S_TIMING_0
 */

#define I2S_I2S_TIMING_NON_SYM_ENABLE		(1<<12)
#define I2S_I2S_TIMING_CHANNEL_BIT_COUNT_MASK	0x7ff
#define I2S_I2S_TIMING_CHANNEL_BIT_COUNT	(1<<0)

/*
 * I2S_I2S_FIFO_SCR_0
 */

#define I2S_I2S_FIFO_SCR_FIFO_FULL_EMPTY_COUNT_MASK  0x3f
#define I2S_I2S_FIFO_SCR_FIFO2_FULL_EMPTY_COUNT_SHIFT 24
#define I2S_I2S_FIFO_SCR_FIFO1_FULL_EMPTY_COUNT_SHIFT 16

#define I2S_I2S_FIFO_SCR_FIFO2_FULL_EMPTY_COUNT_MASK	(0x3f<<24)
#define I2S_I2S_FIFO_SCR_FIFO1_FULL_EMPTY_COUNT_MASK	(0x3f<<16)

#define I2S_I2S_FIFO_SCR_FIFO2_CLR			(1<<12)
#define I2S_I2S_FIFO_SCR_FIFO1_CLR			(1<<8)

#define I2S_FIFO_ATN_LVL_ONE_SLOT	0
#define I2S_FIFO_ATN_LVL_FOUR_SLOTS	1
#define I2S_FIFO_ATN_LVL_EIGHT_SLOTS	2
#define I2S_FIFO_ATN_LVL_TWELVE_SLOTS	3
#define I2S_FIFO2_ATN_LVL_SHIFT		4
#define I2S_FIFO1_ATN_LVL_SHIFT		0

#define I2S_I2S_FIFO_SCR_FIFO2_ATN_LVL_MASK		\
		(3 << I2S_FIFO2_ATN_LVL_SHIFT)
#define I2S_I2S_FIFO_SCR_FIFO2_ATN_LVL_ONE_SLOT		\
		(I2S_FIFO_ATN_LVL_ONE_SLOT     << I2S_FIFO2_ATN_LVL_SHIFT)
#define I2S_I2S_FIFO_SCR_FIFO2_ATN_LVL_FOUR_SLOTS	\
		(I2S_FIFO_ATN_LVL_FOUR_SLOTS   << I2S_FIFO2_ATN_LVL_SHIFT)
#define I2S_I2S_FIFO_SCR_FIFO2_ATN_LVL_EIGHT_SLOTS	\
		(I2S_FIFO_ATN_LVL_EIGHT_SLOTS  << I2S_FIFO2_ATN_LVL_SHIFT)
#define I2S_I2S_FIFO_SCR_FIFO2_ATN_LVL_TWELVE_SLOTS	\
		(I2S_FIFO_ATN_LVL_TWELVE_SLOTS << I2S_FIFO2_ATN_LVL_SHIFT)

#define I2S_I2S_FIFO_SCR_FIFO1_ATN_LVL_MASK		\
		(3 << I2S_FIFO1_ATN_LVL_SHIFT)
#define I2S_I2S_FIFO_SCR_FIFO1_ATN_LVL_ONE_SLOT		\
		(I2S_FIFO_ATN_LVL_ONE_SLOT     << I2S_FIFO1_ATN_LVL_SHIFT)
#define I2S_I2S_FIFO_SCR_FIFO1_ATN_LVL_FOUR_SLOTS	\
		(I2S_FIFO_ATN_LVL_FOUR_SLOTS   << I2S_FIFO1_ATN_LVL_SHIFT)
#define I2S_I2S_FIFO_SCR_FIFO1_ATN_LVL_EIGHT_SLOTS	\
		(I2S_FIFO_ATN_LVL_EIGHT_SLOTS  << I2S_FIFO1_ATN_LVL_SHIFT)
#define I2S_I2S_FIFO_SCR_FIFO1_ATN_LVL_TWELVE_SLOTS	\
		(I2S_FIFO_ATN_LVL_TWELVE_SLOTS << I2S_FIFO1_ATN_LVL_SHIFT)
/*
 * I2S_I2S_PCM_CTRL_0
 */
#define I2S_PCM_TRM_EDGE_POS_EDGE_NO_HIGHZ		0
#define I2S_PCM_TRM_EDGE_POS_EDGE_HIGHZ			1
#define I2S_PCM_TRM_EDGE_NEG_EDGE_NO_HIGHZ		2
#define I2S_PCM_TRM_EDGE_NEG_EDGE_HIGHZ			3
#define I2S_PCM_TRM_EDGE_CTRL_SHIFT			9

#define I2S_I2S_PCM_TRM_EDGE_CTRL_MASK			\
		(3 << I2S_I2S_PCM_TRM_EDGE_CTRL_SHIFT)
#define I2S_I2S_PCM_TRM_EDGE_POS_EDGE_NO_HIGHZ		\
		(I2S_PCM_TRM_EDGE_POS_EDGE_HIGHZ	\
		<< I2S_PCM_TRM_EDGE_CTRL_SHIFT)
#define I2S_I2S_PCM_TRM_EDGE_POS_EDGE_HIGHZ		\
		(I2S_PCM_TRM_EDGE_POS_EDGE_NO_HIGHZ	\
		<< I2S_PCM_TRM_EDGE_CTRL_SHIFT)
#define I2S_I2S_PCM_TRM_EDGE_NEG_EDGE_NO_HIGHZ		\
		(I2S_PCM_TRM_EDGE_NEG_EDGE_NO_HIGHZ	\
		<< I2S_PCM_TRM_EDGE_CTRL_SHIFT)
#define I2S_I2S_PCM_TRM_EDGE_NEG_EDGE_HIGHZ		\
		(I2S_PCM_TRM_EDGE_NEG_EDGE_HIGHZ	\
		<< I2S_PCM_TRM_EDGE_CTRL_SHIFT)

#define I2S_PCM_TRM_MASK_BITS_ZERO			0
#define I2S_PCM_TRM_MASK_BITS_ONE			1
#define I2S_PCM_TRM_MASK_BITS_TWO			2
#define I2S_PCM_TRM_MASK_BITS_THREE			3
#define I2S_PCM_TRM_MASK_BITS_FOUR			4
#define I2S_PCM_TRM_MASK_BITS_FIVE			5
#define I2S_PCM_TRM_MASK_BITS_SIX			6
#define I2S_PCM_TRM_MASK_BITS_SEVEN			7
#define I2S_PCM_TRM_MASK_BITS_SHIFT			6

#define I2S_I2S_PCM_TRM_MASK_BITS_MASK			\
		(7 << I2S_PCM_TRM_MASK_BITS_SHIFT)
#define I2S_I2S_PCM_TRM_MASK_BITS_ZERO			\
		(I2S_PCM_TRM_MASK_BITS_ZERO		\
		<< I2S_PCM_TRM_MASK_BITS_SHIFT)
#define I2S_I2S_PCM_TRM_MASK_BITS_ONE			\
		(I2S_PCM_TRM_MASK_BITS_ONE		\
		<< I2S_PCM_TRM_MASK_BITS_SHIFT)
#define I2S_I2S_PCM_TRM_MASK_BITS_TWO			\
		(I2S_PCM_TRM_MASK_BITS_TWO		\
		<< I2S_PCM_TRM_MASK_BITS_SHIFT)
#define I2S_I2S_PCM_TRM_MASK_BITS_THREE			\
		(I2S_PCM_TRM_MASK_BITS_THREE		\
		<< I2S_PCM_TRM_MASK_BITS_SHIFT)
#define I2S_I2S_PCM_TRM_MASK_BITS_FOUR			\
		(I2S_PCM_TRM_MASK_BITS_FOUR		\
		<< I2S_PCM_TRM_MASK_BITS_SHIFT)
#define I2S_I2S_PCM_TRM_MASK_BITS_FIVE			\
		(I2S_PCM_TRM_MASK_BITS_FIVE		\
		<< I2S_PCM_TRM_MASK_BITS_SHIFT)
#define I2S_I2S_PCM_TRM_MASK_BITS_SIX			\
		(I2S_PCM_TRM_MASK_BITS_SIX		\
		<< I2S_PCM_TRM_MASK_BITS_SHIFT)
#define I2S_I2S_PCM_TRM_MASK_BITS_SEVEN			\
		(I2S_PCM_TRM_MASK_BITS_SEVEN		\
		<< I2S_PCM_TRM_MASK_BITS_SHIFT)

#define I2S_I2S_PCM_CTRL_FSYNC_PCM_CTRL			(1<<5)
#define I2S_I2S_PCM_CTRL_TRM_MODE			(1<<4)

#define I2S_PCM_RCV_MASK_BITS_ZERO			0
#define I2S_PCM_RCV_MASK_BITS_ONE			1
#define I2S_PCM_RCV_MASK_BITS_TWO			2
#define I2S_PCM_RCV_MASK_BITS_THREE			3
#define I2S_PCM_RCV_MASK_BITS_FOUR			4
#define I2S_PCM_RCV_MASK_BITS_FIVE			5
#define I2S_PCM_RCV_MASK_BITS_SIX			6
#define I2S_PCM_RCV_MASK_BITS_SEVEN			7
#define I2S_PCM_RCV_MASK_BITS_SHIFT			1

#define I2S_I2S_PCM_RCV_MASK_BITS_MASK			\
		(7 << I2S_PCM_RCV_MASK_BITS_SHIFT)
#define I2S_I2S_PCM_RCV_MASK_BITS_ZERO			\
		(I2S_PCM_RCV_MASK_BITS_ZERO		\
		<< I2S_PCM_RCV_MASK_BITS_SHIFT)
#define I2S_I2S_PCM_RCV_MASK_BITS_ONE			\
		(I2S_PCM_RCV_MASK_BITS_ONE		\
		<< I2S_PCM_RCV_MASK_BITS_SHIFT)
#define I2S_I2S_PCM_RCV_MASK_BITS_TWO			\
		(I2S_PCM_RCV_MASK_BITS_TWO		\
		<< I2S_PCM_RCV_MASK_BITS_SHIFT)
#define I2S_I2S_PCM_RCV_MASK_BITS_THREE			\
		(I2S_PCM_RCV_MASK_BITS_THREE		\
		<< I2S_PCM_RCV_MASK_BITS_SHIFT)
#define I2S_I2S_PCM_RCV_MASK_BITS_FOUR			\
		(I2S_PCM_RCV_MASK_BITS_FOUR		\
		<< I2S_PCM_RCV_MASK_BITS_SHIFT)
#define I2S_I2S_PCM_RCV_MASK_BITS_FIVE			\
		(I2S_PCM_RCV_MASK_BITS_FIVE		\
		<< I2S_PCM_RCV_MASK_BITS_SHIFT)
#define I2S_I2S_PCM_RCV_MASK_BITS_SIX			\
		(I2S_PCM_RCV_MASK_BITS_SIX		\
		<< I2S_PCM_RCV_MASK_BITS_SHIFT)
#define I2S_I2S_PCM_RCV_MASK_BITS_SEVEN			\
		(I2S_PCM_RCV_MASK_BITS_SEVEN		\
		<< I2S_PCM_RCV_MASK_BITS_SHIFT)

#define I2S_I2S_PCM_CTRL_RCV_MODE			(1<<0)

/*
 * I2S_I2S_NW_CTRL_0
 */

#define I2S_TRM_TLPHY_SLOT_SEL_SLOT1 			0
#define I2S_TRM_TLPHY_SLOT_SEL_SLOT2 			1
#define I2S_TRM_TLPHY_SLOT_SEL_SLOT3 			2
#define I2S_TRM_TLPHY_SLOT_SEL_SLOT4 			3
#define I2S_I2S_NW_TRM_TLPHY_SLOT_SEL_SHIFT		4

#define I2S_I2S_NW_TRM_TLPHY_SLOT_SEL_MASK		\
		(3 << I2S_TRM_TLPHY_SLOT_SEL_SHIFT)
#define I2S_I2S_TRM_TLPHY_SLOT_SEL_SLOT1		\
		(I2S_TRM_TLPHY_SLOT_SEL_SLOT1		\
		<< I2S_I2S_NW_TRM_TLPHY_SLOT_SEL_SHIFT)
#define I2S_I2S_TRM_TLPHY_SLOT_SEL_SLOT2		\
		(I2S_TRM_TLPHY_SLOT_SEL_SLOT2		\
		<< I2S_I2S_NW_TRM_TLPHY_SLOT_SEL_SHIFT)
#define I2S_I2S_TRM_TLPHY_SLOT_SEL_SLOT3		\
		(I2S_TRM_TLPHY_SLOT_SEL_SLOT3		\
		<< I2S_I2S_NW_TRM_TLPHY_SLOT_SEL_SHIFT)
#define I2S_I2S_TRM_TLPHY_SLOT_SEL_SLOT4		\
		(I2S_TRM_TLPHY_SLOT_SEL_SLOT4		\
		<< I2S_I2S_NW_TRM_TLPHY_SLOT_SEL_SHIFT)

#define I2S_I2S_NW_CTRL_TRM_TLPHY_MODE			(1<<3)

#define I2S_RCV_TLPHY_SLOT_SEL_SLOT1 			0
#define I2S_RCV_TLPHY_SLOT_SEL_SLOT2 			1
#define I2S_RCV_TLPHY_SLOT_SEL_SLOT3 			2
#define I2S_RCV_TLPHY_SLOT_SEL_SLOT4 			3
#define I2S_I2S_NW_RCV_TLPHY_SLOT_SEL_SHIFT		1

#define I2S_I2S_NW_RCV_TLPHY_SLOT_SEL_MASK		\
		(3 << I2S_RCV_TLPHY_SLOT_SEL_SHIFT)
#define I2S_I2S_RCV_TLPHY_SLOT_SEL_SLOT1		\
		(I2S_RCV_TLPHY_SLOT_SEL_SLOT1		\
		<< I2S_I2S_NW_RCV_TLPHY_SLOT_SEL_SHIFT)
#define I2S_I2S_RCV_TLPHY_SLOT_SEL_SLOT2		\
		(I2S_RCV_TLPHY_SLOT_SEL_SLOT2		\
		<< I2S_I2S_NW_RCV_TLPHY_SLOT_SEL_SHIFT)
#define I2S_I2S_RCV_TLPHY_SLOT_SEL_SLOT3		\
		(I2S_RCV_TLPHY_SLOT_SEL_SLOT3		\
		<< I2S_I2S_NW_RCV_TLPHY_SLOT_SEL_SHIFT)
#define I2S_I2S_RCV_TLPHY_SLOT_SEL_SLOT4		\
		(I2S_RCV_TLPHY_SLOT_SEL_SLOT4		\
		<< I2S_I2S_NW_RCV_TLPHY_SLOT_SEL_SHIFT)

#define I2S_I2S_NW_CTRL_RCV_TLPHY_MODE			(1<<0)

#endif /* __ARCH_ARM_MACH_TEGRA_I2S_H */
