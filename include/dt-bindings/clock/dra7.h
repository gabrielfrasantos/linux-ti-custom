/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright 2017 Texas Instruments, Inc.
 */
#ifndef __DT_BINDINGS_CLK_DRA7_H
#define __DT_BINDINGS_CLK_DRA7_H

#define DRA7_CLKCTRL_OFFSET	0x20
#define DRA7_CLKCTRL_INDEX(offset)	((offset) - DRA7_CLKCTRL_OFFSET)

/* XXX: Compatibility part begin, remove this once compatibility support is no longer needed */

/* mpu clocks */
#define DRA7_MPU_CLKCTRL	DRA7_CLKCTRL_INDEX(0x20)

/* dsp clocks */
#define DRA7_DSP1_CLKCTRL	DRA7_CLKCTRL_INDEX(0x20)
#define DRA7_DSP2_CLKCTRL	DRA7_CLKCTRL_INDEX(0x20)

/* ipu1 clocks */
#define DRA7_IPU1_CLKCTRL	DRA7_CLKCTRL_INDEX(0x20)

/* ipu clocks */
#define DRA7_IPU_CLKCTRL_OFFSET	0x40
#define DRA7_IPU_CLKCTRL_INDEX(offset)	((offset) - DRA7_IPU_CLKCTRL_OFFSET)
#define DRA7_MCASP1_CLKCTRL	DRA7_IPU_CLKCTRL_INDEX(0x50)
#define DRA7_TIMER5_CLKCTRL	DRA7_IPU_CLKCTRL_INDEX(0x58)
#define DRA7_TIMER6_CLKCTRL	DRA7_IPU_CLKCTRL_INDEX(0x60)
#define DRA7_TIMER7_CLKCTRL	DRA7_IPU_CLKCTRL_INDEX(0x68)
#define DRA7_TIMER8_CLKCTRL	DRA7_IPU_CLKCTRL_INDEX(0x70)
#define DRA7_I2C5_CLKCTRL	DRA7_IPU_CLKCTRL_INDEX(0x78)
#define DRA7_UART6_CLKCTRL	DRA7_IPU_CLKCTRL_INDEX(0x80)

/* rtc clocks */
#define DRA7_RTC_CLKCTRL_OFFSET	0x40
#define DRA7_RTC_CLKCTRL_INDEX(offset)	((offset) - DRA7_RTC_CLKCTRL_OFFSET)
#define DRA7_RTCSS_CLKCTRL	DRA7_RTC_CLKCTRL_INDEX(0x44)

/* coreaon clocks */
#define DRA7_SMARTREFLEX_MPU_CLKCTRL	DRA7_CLKCTRL_INDEX(0x28)
#define DRA7_SMARTREFLEX_CORE_CLKCTRL	DRA7_CLKCTRL_INDEX(0x38)

/* l3main1 clocks */
#define DRA7_L3_MAIN_1_CLKCTRL	DRA7_CLKCTRL_INDEX(0x20)
#define DRA7_GPMC_CLKCTRL	DRA7_CLKCTRL_INDEX(0x28)
#define DRA7_TPCC_CLKCTRL	DRA7_CLKCTRL_INDEX(0x70)
#define DRA7_TPTC0_CLKCTRL	DRA7_CLKCTRL_INDEX(0x78)
#define DRA7_TPTC1_CLKCTRL	DRA7_CLKCTRL_INDEX(0x80)
#define DRA7_VCP1_CLKCTRL	DRA7_CLKCTRL_INDEX(0x88)
#define DRA7_VCP2_CLKCTRL	DRA7_CLKCTRL_INDEX(0x90)

/* ipu2 clocks */
#define DRA7_IPU2_CLKCTRL	DRA7_CLKCTRL_INDEX(0x20)

/* dma clocks */
#define DRA7_DMA_SYSTEM_CLKCTRL	DRA7_CLKCTRL_INDEX(0x20)

/* emif clocks */
#define DRA7_DMM_CLKCTRL	DRA7_CLKCTRL_INDEX(0x20)

/* atl clocks */
#define DRA7_ATL_CLKCTRL_OFFSET	0x0
#define DRA7_ATL_CLKCTRL_INDEX(offset)	((offset) - DRA7_ATL_CLKCTRL_OFFSET)
#define DRA7_ATL_CLKCTRL	DRA7_ATL_CLKCTRL_INDEX(0x0)

/* l4cfg clocks */
#define DRA7_L4_CFG_CLKCTRL	DRA7_CLKCTRL_INDEX(0x20)
#define DRA7_SPINLOCK_CLKCTRL	DRA7_CLKCTRL_INDEX(0x28)
#define DRA7_MAILBOX1_CLKCTRL	DRA7_CLKCTRL_INDEX(0x30)
#define DRA7_MAILBOX2_CLKCTRL	DRA7_CLKCTRL_INDEX(0x48)
#define DRA7_MAILBOX3_CLKCTRL	DRA7_CLKCTRL_INDEX(0x50)
#define DRA7_MAILBOX4_CLKCTRL	DRA7_CLKCTRL_INDEX(0x58)
#define DRA7_MAILBOX5_CLKCTRL	DRA7_CLKCTRL_INDEX(0x60)
#define DRA7_MAILBOX6_CLKCTRL	DRA7_CLKCTRL_INDEX(0x68)
#define DRA7_MAILBOX7_CLKCTRL	DRA7_CLKCTRL_INDEX(0x70)
#define DRA7_MAILBOX8_CLKCTRL	DRA7_CLKCTRL_INDEX(0x78)
#define DRA7_MAILBOX9_CLKCTRL	DRA7_CLKCTRL_INDEX(0x80)
#define DRA7_MAILBOX10_CLKCTRL	DRA7_CLKCTRL_INDEX(0x88)
#define DRA7_MAILBOX11_CLKCTRL	DRA7_CLKCTRL_INDEX(0x90)
#define DRA7_MAILBOX12_CLKCTRL	DRA7_CLKCTRL_INDEX(0x98)
#define DRA7_MAILBOX13_CLKCTRL	DRA7_CLKCTRL_INDEX(0xa0)

/* l3instr clocks */
#define DRA7_L3_MAIN_2_CLKCTRL	DRA7_CLKCTRL_INDEX(0x20)
#define DRA7_L3_INSTR_CLKCTRL	DRA7_CLKCTRL_INDEX(0x28)

/* dss clocks */
#define DRA7_DSS_CORE_CLKCTRL	DRA7_CLKCTRL_INDEX(0x20)
#define DRA7_BB2D_CLKCTRL	DRA7_CLKCTRL_INDEX(0x30)

/* l3init clocks */
#define DRA7_MMC1_CLKCTRL	DRA7_CLKCTRL_INDEX(0x28)
#define DRA7_MMC2_CLKCTRL	DRA7_CLKCTRL_INDEX(0x30)
#define DRA7_USB_OTG_SS2_CLKCTRL	DRA7_CLKCTRL_INDEX(0x40)
#define DRA7_USB_OTG_SS3_CLKCTRL	DRA7_CLKCTRL_INDEX(0x48)
#define DRA7_USB_OTG_SS4_CLKCTRL	DRA7_CLKCTRL_INDEX(0x50)
#define DRA7_SATA_CLKCTRL	DRA7_CLKCTRL_INDEX(0x88)
#define DRA7_PCIE1_CLKCTRL	DRA7_CLKCTRL_INDEX(0xb0)
#define DRA7_PCIE2_CLKCTRL	DRA7_CLKCTRL_INDEX(0xb8)
#define DRA7_GMAC_CLKCTRL	DRA7_CLKCTRL_INDEX(0xd0)
#define DRA7_OCP2SCP1_CLKCTRL	DRA7_CLKCTRL_INDEX(0xe0)
#define DRA7_OCP2SCP3_CLKCTRL	DRA7_CLKCTRL_INDEX(0xe8)
#define DRA7_USB_OTG_SS1_CLKCTRL	DRA7_CLKCTRL_INDEX(0xf0)

/* l4per clocks */
#define DRA7_L4PER_CLKCTRL_OFFSET	0x0
#define DRA7_L4PER_CLKCTRL_INDEX(offset)	((offset) - DRA7_L4PER_CLKCTRL_OFFSET)
#define DRA7_L4_PER2_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0xc)
#define DRA7_L4_PER3_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x14)
#define DRA7_PRUSS1_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x18)
#define DRA7_PRUSS2_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x20)
#define DRA7_TIMER10_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x28)
#define DRA7_TIMER11_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x30)
#define DRA7_TIMER2_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x38)
#define DRA7_TIMER3_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x40)
#define DRA7_TIMER4_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x48)
#define DRA7_TIMER9_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x50)
#define DRA7_ELM_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x58)
#define DRA7_GPIO2_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x60)
#define DRA7_GPIO3_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x68)
#define DRA7_GPIO4_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x70)
#define DRA7_GPIO5_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x78)
#define DRA7_GPIO6_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x80)
#define DRA7_HDQ1W_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x88)
#define DRA7_EPWMSS1_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x90)
#define DRA7_EPWMSS2_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x98)
#define DRA7_I2C1_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0xa0)
#define DRA7_I2C2_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0xa8)
#define DRA7_I2C3_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0xb0)
#define DRA7_I2C4_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0xb8)
#define DRA7_L4_PER1_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0xc0)
#define DRA7_EPWMSS0_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0xc4)
#define DRA7_TIMER13_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0xc8)
#define DRA7_TIMER14_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0xd0)
#define DRA7_TIMER15_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0xd8)
#define DRA7_MCSPI1_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0xf0)
#define DRA7_MCSPI2_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0xf8)
#define DRA7_MCSPI3_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x100)
#define DRA7_MCSPI4_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x108)
#define DRA7_GPIO7_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x110)
#define DRA7_GPIO8_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x118)
#define DRA7_MMC3_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x120)
#define DRA7_MMC4_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x128)
#define DRA7_TIMER16_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x130)
#define DRA7_QSPI_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x138)
#define DRA7_UART1_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x140)
#define DRA7_UART2_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x148)
#define DRA7_UART3_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x150)
#define DRA7_UART4_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x158)
#define DRA7_MCASP2_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x160)
#define DRA7_MCASP3_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x168)
#define DRA7_UART5_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x170)
#define DRA7_MCASP5_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x178)
#define DRA7_MCASP8_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x190)
#define DRA7_MCASP4_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x198)
#define DRA7_AES1_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x1a0)
#define DRA7_AES2_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x1a8)
#define DRA7_DES_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x1b0)
#define DRA7_RNG_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x1c0)
#define DRA7_SHAM_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x1c8)
#define DRA7_UART7_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x1d0)
#define DRA7_UART8_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x1e0)
#define DRA7_UART9_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x1e8)
#define DRA7_DCAN2_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x1f0)
#define DRA7_MCASP6_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x204)
#define DRA7_MCASP7_CLKCTRL	DRA7_L4PER_CLKCTRL_INDEX(0x208)

/* wkupaon clocks */
#define DRA7_L4_WKUP_CLKCTRL	DRA7_CLKCTRL_INDEX(0x20)
#define DRA7_WD_TIMER2_CLKCTRL	DRA7_CLKCTRL_INDEX(0x30)
#define DRA7_GPIO1_CLKCTRL	DRA7_CLKCTRL_INDEX(0x38)
#define DRA7_TIMER1_CLKCTRL	DRA7_CLKCTRL_INDEX(0x40)
#define DRA7_TIMER12_CLKCTRL	DRA7_CLKCTRL_INDEX(0x48)
#define DRA7_COUNTER_32K_CLKCTRL	DRA7_CLKCTRL_INDEX(0x50)
#define DRA7_UART10_CLKCTRL	DRA7_CLKCTRL_INDEX(0x80)
#define DRA7_DCAN1_CLKCTRL	DRA7_CLKCTRL_INDEX(0x88)
#define DRA7_ADC_CLKCTRL	DRA7_CLKCTRL_INDEX(0xa0)

#endif
