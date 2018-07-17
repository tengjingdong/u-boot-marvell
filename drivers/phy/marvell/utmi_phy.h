/*
 * Copyright (C) 2015-2016 Marvell International Ltd.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef _UTMI_PHY_H_
#define _UTMI_PHY_H_

#define UTMI_USB_CFG_DEVICE_EN_OFFSET		0
#define UTMI_USB_CFG_DEVICE_EN_MASK		\
	(0x1 << UTMI_USB_CFG_DEVICE_EN_OFFSET)
#define UTMI_USB_CFG_DEVICE_MUX_OFFSET		1
#define UTMI_USB_CFG_DEVICE_MUX_MASK		\
	(0x1 << UTMI_USB_CFG_DEVICE_MUX_OFFSET)
#define UTMI_USB_CFG_PLL_OFFSET			25
#define UTMI_USB_CFG_PLL_MASK			\
	(0x1 << UTMI_USB_CFG_PLL_OFFSET)

#define UTMI_PHY_CFG_PU_OFFSET			5
#define UTMI_PHY_CFG_PU_MASK			\
	(0x1 << UTMI_PHY_CFG_PU_OFFSET)

#define UTMI_PLL_CTRL_REG			0x0
#define UTMI_PLL_CTRL_REFDIV_OFFSET		0
#define UTMI_PLL_CTRL_REFDIV_MASK		\
	(0x7f << UTMI_PLL_CTRL_REFDIV_OFFSET)
#define UTMI_PLL_CTRL_FBDIV_OFFSET		16
#define UTMI_PLL_CTRL_FBDIV_MASK		\
	(0x1FF << UTMI_PLL_CTRL_FBDIV_OFFSET)
#define UTMI_PLL_CTRL_SEL_LPFR_OFFSET		28
#define UTMI_PLL_CTRL_SEL_LPFR_MASK		\
	(0x3 << UTMI_PLL_CTRL_SEL_LPFR_OFFSET)
#define UTMI_PLL_CTRL_PLL_RDY_OFFSET		31
#define UTMI_PLL_CTRL_PLL_RDY_MASK		\
	(0x1 << UTMI_PLL_CTRL_PLL_RDY_OFFSET)

#define UTMI_CALIB_CTRL_REG			0x8
#define UTMI_CALIB_CTRL_IMPCAL_VTH_OFFSET	8
#define UTMI_CALIB_CTRL_IMPCAL_VTH_MASK		\
	(0x7 << UTMI_CALIB_CTRL_IMPCAL_VTH_OFFSET)
#define UTMI_CALIB_CTRL_IMPCAL_DONE_OFFSET	23
#define UTMI_CALIB_CTRL_IMPCAL_DONE_MASK	\
	(0x1 << UTMI_CALIB_CTRL_IMPCAL_DONE_OFFSET)
#define UTMI_CALIB_CTRL_PLLCAL_DONE_OFFSET	31
#define UTMI_CALIB_CTRL_PLLCAL_DONE_MASK	\
	(0x1 << UTMI_CALIB_CTRL_PLLCAL_DONE_OFFSET)

#define UTMI_TX_CH_CTRL_REG			0xC
#define UTMI_TX_CH_CTRL_DRV_EN_LS_OFFSET	12
#define UTMI_TX_CH_CTRL_DRV_EN_LS_MASK		\
	(0xf << UTMI_TX_CH_CTRL_DRV_EN_LS_OFFSET)
#define UTMI_TX_CH_CTRL_IMP_SEL_LS_OFFSET	16
#define UTMI_TX_CH_CTRL_IMP_SEL_LS_MASK		\
	(0xf << UTMI_TX_CH_CTRL_IMP_SEL_LS_OFFSET)
#define UTMI_TX_CH_CTRL_AMP_OFFSET		20
#define UTMI_TX_CH_CTRL_AMP_MASK		\
	(0x7 << UTMI_TX_CH_CTRL_AMP_OFFSET)

#define UTMI_RX_CH_CTRL0_REG			0x14
#define UTMI_RX_CH_CTRL0_SQ_DET_OFFSET		15
#define UTMI_RX_CH_CTRL0_SQ_DET_MASK		\
	(0x1 << UTMI_RX_CH_CTRL0_SQ_DET_OFFSET)
#define UTMI_RX_CH_CTRL0_SQ_ANA_DTC_OFFSET	28
#define UTMI_RX_CH_CTRL0_SQ_ANA_DTC_MASK	\
	(0x1 << UTMI_RX_CH_CTRL0_SQ_ANA_DTC_OFFSET)

#define UTMI_RX_CH_CTRL1_REG			0x18
#define UTMI_RX_CH_CTRL1_SQ_AMP_CAL_OFFSET	0
#define UTMI_RX_CH_CTRL1_SQ_AMP_CAL_MASK	\
	(0x7 << UTMI_RX_CH_CTRL1_SQ_AMP_CAL_OFFSET)
#define UTMI_RX_CH_CTRL1_SQ_AMP_CAL_EN_OFFSET	3
#define UTMI_RX_CH_CTRL1_SQ_AMP_CAL_EN_MASK	\
	(0x1 << UTMI_RX_CH_CTRL1_SQ_AMP_CAL_EN_OFFSET)

#define UTMI_CTRL_STATUS0_REG			0x24
#define UTMI_CTRL_STATUS0_SUSPENDM_OFFSET	22
#define UTMI_CTRL_STATUS0_SUSPENDM_MASK		\
	(0x1 << UTMI_CTRL_STATUS0_SUSPENDM_OFFSET)
#define UTMI_CTRL_STATUS0_TEST_SEL_OFFSET	25
#define UTMI_CTRL_STATUS0_TEST_SEL_MASK		\
	(0x1 << UTMI_CTRL_STATUS0_TEST_SEL_OFFSET)

#define UTMI_CHGDTC_CTRL_REG			0x38
#define UTMI_CHGDTC_CTRL_VDAT_OFFSET		8
#define UTMI_CHGDTC_CTRL_VDAT_MASK		\
	(0x3 << UTMI_CHGDTC_CTRL_VDAT_OFFSET)
#define UTMI_CHGDTC_CTRL_VSRC_OFFSET		10
#define UTMI_CHGDTC_CTRL_VSRC_MASK		\
	(0x3 << UTMI_CHGDTC_CTRL_VSRC_OFFSET)

#endif /* _UTMI_PHY_H_ */

