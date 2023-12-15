/*
 *
 * Copyright (C) 2016 Advanced Micro Devices, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
 * AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef SMU_6_0_SH_MASK_H
#define SMU_6_0_SH_MASK_H

#define CG_SPLL_FUNC_CNTL_3__SPLL_FB_DIV_MASK 0x03ffffffL
#define CG_SPLL_FUNC_CNTL_3__SPLL_FB_DIV__SHIFT 0x00000000
#define CG_SPLL_FUNC_CNTL__SPLL_REF_DIV_MASK 0x000003f0L
#define CG_SPLL_FUNC_CNTL__SPLL_REF_DIV__SHIFT 0x00000004
#define GPIOPAD_A__GPIO_A_MASK 0x7fffffffL
#define GPIOPAD_A__GPIO_A__SHIFT 0x00000000
#define GPIOPAD_EN__GPIO_EN_MASK 0x7fffffffL
#define GPIOPAD_EN__GPIO_EN__SHIFT 0x00000000
#define GPIOPAD_EXTERN_TRIG_CNTL__EXTERN_TRIG_CLR_MASK 0x00000020L
#define GPIOPAD_EXTERN_TRIG_CNTL__EXTERN_TRIG_CLR__SHIFT 0x00000005
#define GPIOPAD_EXTERN_TRIG_CNTL__EXTERN_TRIG_READ_MASK 0x00000040L
#define GPIOPAD_EXTERN_TRIG_CNTL__EXTERN_TRIG_READ__SHIFT 0x00000006
#define GPIOPAD_EXTERN_TRIG_CNTL__EXTERN_TRIG_SEL_MASK 0x0000001fL
#define GPIOPAD_EXTERN_TRIG_CNTL__EXTERN_TRIG_SEL__SHIFT 0x00000000
#define GPIOPAD_INT_EN__GPIO_INT_EN_MASK 0x1fffffffL
#define GPIOPAD_INT_EN__GPIO_INT_EN__SHIFT 0x00000000
#define GPIOPAD_INT_EN__SW_INITIATED_INT_EN_MASK 0x80000000L
#define GPIOPAD_INT_EN__SW_INITIATED_INT_EN__SHIFT 0x0000001f
#define GPIOPAD_INT_POLARITY__GPIO_INT_POLARITY_MASK 0x1fffffffL
#define GPIOPAD_INT_POLARITY__GPIO_INT_POLARITY__SHIFT 0x00000000
#define GPIOPAD_INT_POLARITY__SW_INITIATED_INT_POLARITY_MASK 0x80000000L
#define GPIOPAD_INT_POLARITY__SW_INITIATED_INT_POLARITY__SHIFT 0x0000001f
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_0_MASK 0x00000001L
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_0__SHIFT 0x00000000
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_10_MASK 0x00000400L
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_10__SHIFT 0x0000000a
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_11_MASK 0x00000800L
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_11__SHIFT 0x0000000b
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_12_MASK 0x00001000L
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_12__SHIFT 0x0000000c
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_13_MASK 0x00002000L
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_13__SHIFT 0x0000000d
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_14_MASK 0x00004000L
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_14__SHIFT 0x0000000e
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_15_MASK 0x00008000L
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_15__SHIFT 0x0000000f
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_16_MASK 0x00010000L
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_16__SHIFT 0x00000010
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_17_MASK 0x00020000L
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_17__SHIFT 0x00000011
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_18_MASK 0x00040000L
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_18__SHIFT 0x00000012
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_19_MASK 0x00080000L
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_19__SHIFT 0x00000013
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_1_MASK 0x00000002L
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_1__SHIFT 0x00000001
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_20_MASK 0x00100000L
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_20__SHIFT 0x00000014
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_21_MASK 0x00200000L
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_21__SHIFT 0x00000015
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_22_MASK 0x00400000L
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_22__SHIFT 0x00000016
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_23_MASK 0x00800000L
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_23__SHIFT 0x00000017
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_24_MASK 0x01000000L
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_24__SHIFT 0x00000018
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_25_MASK 0x02000000L
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_25__SHIFT 0x00000019
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_26_MASK 0x04000000L
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_26__SHIFT 0x0000001a
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_27_MASK 0x08000000L
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_27__SHIFT 0x0000001b
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_28_MASK 0x10000000L
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_28__SHIFT 0x0000001c
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_2_MASK 0x00000004L
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_2__SHIFT 0x00000002
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_3_MASK 0x00000008L
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_3__SHIFT 0x00000003
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_4_MASK 0x00000010L
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_4__SHIFT 0x00000004
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_5_MASK 0x00000020L
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_5__SHIFT 0x00000005
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_6_MASK 0x00000040L
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_6__SHIFT 0x00000006
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_7_MASK 0x00000080L
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_7__SHIFT 0x00000007
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_8_MASK 0x00000100L
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_8__SHIFT 0x00000008
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_9_MASK 0x00000200L
#define GPIOPAD_INT_STAT_AK__GPIO_INT_STAT_AK_9__SHIFT 0x00000009
#define GPIOPAD_INT_STAT_AK__SW_INITIATED_INT_STAT_AK_MASK 0x80000000L
#define GPIOPAD_INT_STAT_AK__SW_INITIATED_INT_STAT_AK__SHIFT 0x0000001f
#define GPIOPAD_INT_STAT_EN__GPIO_INT_STAT_EN_MASK 0x1fffffffL
#define GPIOPAD_INT_STAT_EN__GPIO_INT_STAT_EN__SHIFT 0x00000000
#define GPIOPAD_INT_STAT_EN__SW_INITIATED_INT_STAT_EN_MASK 0x80000000L
#define GPIOPAD_INT_STAT_EN__SW_INITIATED_INT_STAT_EN__SHIFT 0x0000001f
#define GPIOPAD_INT_STAT__GPIO_INT_STAT_MASK 0x1fffffffL
#define GPIOPAD_INT_STAT__GPIO_INT_STAT__SHIFT 0x00000000
#define GPIOPAD_INT_STAT__SW_INITIATED_INT_STAT_MASK 0x80000000L
#define GPIOPAD_INT_STAT__SW_INITIATED_INT_STAT__SHIFT 0x0000001f
#define GPIOPAD_INT_TYPE__GPIO_INT_TYPE_MASK 0x1fffffffL
#define GPIOPAD_INT_TYPE__GPIO_INT_TYPE__SHIFT 0x00000000
#define GPIOPAD_INT_TYPE__SW_INITIATED_INT_TYPE_MASK 0x80000000L
#define GPIOPAD_INT_TYPE__SW_INITIATED_INT_TYPE__SHIFT 0x0000001f
#define GPIOPAD_MASK__GPIO_MASK_MASK 0x7fffffffL
#define GPIOPAD_MASK__GPIO_MASK__SHIFT 0x00000000
#define GPIOPAD_PD_EN__GPIO_PD_EN_MASK 0x7fffffffL
#define GPIOPAD_PD_EN__GPIO_PD_EN__SHIFT 0x00000000
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_0_MASK 0x00000001L
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_0__SHIFT 0x00000000
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_10_MASK 0x00000400L
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_10__SHIFT 0x0000000a
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_11_MASK 0x00000800L
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_11__SHIFT 0x0000000b
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_12_MASK 0x00001000L
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_12__SHIFT 0x0000000c
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_13_MASK 0x00002000L
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_13__SHIFT 0x0000000d
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_14_MASK 0x00004000L
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_14__SHIFT 0x0000000e
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_15_MASK 0x00008000L
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_15__SHIFT 0x0000000f
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_16_MASK 0x00010000L
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_16__SHIFT 0x00000010
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_17_MASK 0x00020000L
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_17__SHIFT 0x00000011
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_18_MASK 0x00040000L
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_18__SHIFT 0x00000012
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_19_MASK 0x00080000L
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_19__SHIFT 0x00000013
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_1_MASK 0x00000002L
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_1__SHIFT 0x00000001
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_20_MASK 0x00100000L
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_20__SHIFT 0x00000014
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_21_MASK 0x00200000L
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_21__SHIFT 0x00000015
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_22_MASK 0x00400000L
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_22__SHIFT 0x00000016
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_23_MASK 0x00800000L
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_23__SHIFT 0x00000017
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_24_MASK 0x01000000L
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_24__SHIFT 0x00000018
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_25_MASK 0x02000000L
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_25__SHIFT 0x00000019
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_26_MASK 0x04000000L
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_26__SHIFT 0x0000001a
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_27_MASK 0x08000000L
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_27__SHIFT 0x0000001b
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_28_MASK 0x10000000L
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_28__SHIFT 0x0000001c
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_29_MASK 0x20000000L
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_29__SHIFT 0x0000001d
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_2_MASK 0x00000004L
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_2__SHIFT 0x00000002
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_30_MASK 0x40000000L
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_30__SHIFT 0x0000001e
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_3_MASK 0x00000008L
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_3__SHIFT 0x00000003
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_4_MASK 0x00000010L
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_4__SHIFT 0x00000004
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_5_MASK 0x00000020L
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_5__SHIFT 0x00000005
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_6_MASK 0x00000040L
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_6__SHIFT 0x00000006
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_7_MASK 0x00000080L
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_7__SHIFT 0x00000007
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_8_MASK 0x00000100L
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_8__SHIFT 0x00000008
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_9_MASK 0x00000200L
#define GPIOPAD_PINSTRAPS__GPIO_PINSTRAP_9__SHIFT 0x00000009
#define GPIOPAD_PU_EN__GPIO_PU_EN_MASK 0x7fffffffL
#define GPIOPAD_PU_EN__GPIO_PU_EN__SHIFT 0x00000000
#define GPIOPAD_RCVR_SEL__GPIO_RCVR_SEL_MASK 0x7fffffffL
#define GPIOPAD_RCVR_SEL__GPIO_RCVR_SEL__SHIFT 0x00000000
#define GPIOPAD_STRENGTH__GPIO_STRENGTH_SN_MASK 0x0000000fL
#define GPIOPAD_STRENGTH__GPIO_STRENGTH_SN__SHIFT 0x00000000
#define GPIOPAD_STRENGTH__GPIO_STRENGTH_SP_MASK 0x000000f0L
#define GPIOPAD_STRENGTH__GPIO_STRENGTH_SP__SHIFT 0x00000004
#define GPIOPAD_SW_INT_STAT__SW_INT_STAT_MASK 0x00000001L
#define GPIOPAD_SW_INT_STAT__SW_INT_STAT__SHIFT 0x00000000
#define GPIOPAD_Y__GPIO_Y_MASK 0x7fffffffL
#define GPIOPAD_Y__GPIO_Y__SHIFT 0x00000000
#define LCAC_MC0_CNTL__MC0_ENABLE_MASK 0x00000001L
#define LCAC_MC0_CNTL__MC0_ENABLE__SHIFT 0x00000000
#define LCAC_MC0_CNTL__MC0_THRESHOLD_MASK 0x0001fffeL
#define LCAC_MC0_CNTL__MC0_THRESHOLD__SHIFT 0x00000001
#define LCAC_MC0_OVR_SEL__MC0_OVR_SEL_MASK 0xffffffffL
#define LCAC_MC0_OVR_SEL__MC0_OVR_SEL__SHIFT 0x00000000
#define LCAC_MC0_OVR_VAL__MC0_OVR_VAL_MASK 0xffffffffL
#define LCAC_MC0_OVR_VAL__MC0_OVR_VAL__SHIFT 0x00000000
#define LCAC_MC1_CNTL__MC1_ENABLE_MASK 0x00000001L
#define LCAC_MC1_CNTL__MC1_ENABLE__SHIFT 0x00000000
#define LCAC_MC1_CNTL__MC1_THRESHOLD_MASK 0x0001fffeL
#define LCAC_MC1_CNTL__MC1_THRESHOLD__SHIFT 0x00000001
#define LCAC_MC1_OVR_SEL__MC1_OVR_SEL_MASK 0xffffffffL
#define LCAC_MC1_OVR_SEL__MC1_OVR_SEL__SHIFT 0x00000000
#define LCAC_MC1_OVR_VAL__MC1_OVR_VAL_MASK 0xffffffffL
#define LCAC_MC1_OVR_VAL__MC1_OVR_VAL__SHIFT 0x00000000
#define LCAC_MC2_CNTL__MC2_ENABLE_MASK 0x00000001L
#define LCAC_MC2_CNTL__MC2_ENABLE__SHIFT 0x00000000
#define LCAC_MC2_CNTL__MC2_THRESHOLD_MASK 0x0001fffeL
#define LCAC_MC2_CNTL__MC2_THRESHOLD__SHIFT 0x00000001
#define LCAC_MC2_OVR_SEL__MC2_OVR_SEL_MASK 0xffffffffL
#define LCAC_MC2_OVR_SEL__MC2_OVR_SEL__SHIFT 0x00000000
#define LCAC_MC2_OVR_VAL__MC2_OVR_VAL_MASK 0xffffffffL
#define LCAC_MC2_OVR_VAL__MC2_OVR_VAL__SHIFT 0x00000000
#define LCAC_MC3_CNTL__MC3_ENABLE_MASK 0x00000001L
#define LCAC_MC3_CNTL__MC3_ENABLE__SHIFT 0x00000000
#define LCAC_MC3_CNTL__MC3_THRESHOLD_MASK 0x0001fffeL
#define LCAC_MC3_CNTL__MC3_THRESHOLD__SHIFT 0x00000001
#define LCAC_MC3_OVR_SEL__MC3_OVR_SEL_MASK 0xffffffffL
#define LCAC_MC3_OVR_SEL__MC3_OVR_SEL__SHIFT 0x00000000
#define LCAC_MC3_OVR_VAL__MC3_OVR_VAL_MASK 0xffffffffL
#define LCAC_MC3_OVR_VAL__MC3_OVR_VAL__SHIFT 0x00000000
#define LCAC_MC4_CNTL__MC4_ENABLE_MASK 0x00000001L
#define LCAC_MC4_CNTL__MC4_ENABLE__SHIFT 0x00000000
#define LCAC_MC4_CNTL__MC4_THRESHOLD_MASK 0x0001fffeL
#define LCAC_MC4_CNTL__MC4_THRESHOLD__SHIFT 0x00000001
#define LCAC_MC4_OVR_SEL__MC4_OVR_SEL_MASK 0xffffffffL
#define LCAC_MC4_OVR_SEL__MC4_OVR_SEL__SHIFT 0x00000000
#define LCAC_MC4_OVR_VAL__MC4_OVR_VAL_MASK 0xffffffffL
#define LCAC_MC4_OVR_VAL__MC4_OVR_VAL__SHIFT 0x00000000
#define LCAC_MC5_CNTL__MC5_ENABLE_MASK 0x00000001L
#define LCAC_MC5_CNTL__MC5_ENABLE__SHIFT 0x00000000
#define LCAC_MC5_CNTL__MC5_THRESHOLD_MASK 0x0001fffeL
#define LCAC_MC5_CNTL__MC5_THRESHOLD__SHIFT 0x00000001
#define LCAC_MC5_OVR_SEL__MC5_OVR_SEL_MASK 0xffffffffL
#define LCAC_MC5_OVR_SEL__MC5_OVR_SEL__SHIFT 0x00000000
#define LCAC_MC5_OVR_VAL__MC5_OVR_VAL_MASK 0xffffffffL
#define LCAC_MC5_OVR_VAL__MC5_OVR_VAL__SHIFT 0x00000000
#define SMC_IND_ACCESS_CNTL__AUTO_INCREMENT_IND_0_MASK 0x00000001L
#define SMC_IND_ACCESS_CNTL__AUTO_INCREMENT_IND_0__SHIFT 0x00000000
#define SMC_IND_ACCESS_CNTL__AUTO_INCREMENT_IND_1_MASK 0x00000100L
#define SMC_IND_ACCESS_CNTL__AUTO_INCREMENT_IND_1__SHIFT 0x00000008
#define SMC_IND_ACCESS_CNTL__AUTO_INCREMENT_IND_2_MASK 0x00010000L
#define SMC_IND_ACCESS_CNTL__AUTO_INCREMENT_IND_2__SHIFT 0x00000010
#define SMC_IND_ACCESS_CNTL__AUTO_INCREMENT_IND_3_MASK 0x01000000L
#define SMC_IND_ACCESS_CNTL__AUTO_INCREMENT_IND_3__SHIFT 0x00000018
#define SMC_IND_DATA_0__SMC_IND_DATA_MASK 0xffffffffL
#define SMC_IND_DATA_0__SMC_IND_DATA__SHIFT 0x00000000
#define SMC_IND_DATA_1__SMC_IND_DATA_MASK 0xffffffffL
#define SMC_IND_DATA_1__SMC_IND_DATA__SHIFT 0x00000000
#define SMC_IND_DATA_2__SMC_IND_DATA_MASK 0xffffffffL
#define SMC_IND_DATA_2__SMC_IND_DATA__SHIFT 0x00000000
#define SMC_IND_DATA_3__SMC_IND_DATA_MASK 0xffffffffL
#define SMC_IND_DATA_3__SMC_IND_DATA__SHIFT 0x00000000
#define SMC_IND_DATA__SMC_IND_DATA_MASK 0xffffffffL
#define SMC_IND_DATA__SMC_IND_DATA__SHIFT 0x00000000
#define SMC_IND_INDEX_0__SMC_IND_ADDR_MASK 0xffffffffL
#define SMC_IND_INDEX_0__SMC_IND_ADDR__SHIFT 0x00000000
#define SMC_IND_INDEX_1__SMC_IND_ADDR_MASK 0xffffffffL
#define SMC_IND_INDEX_1__SMC_IND_ADDR__SHIFT 0x00000000
#define SMC_IND_INDEX_2__SMC_IND_ADDR_MASK 0xffffffffL
#define SMC_IND_INDEX_2__SMC_IND_ADDR__SHIFT 0x00000000
#define SMC_IND_INDEX_3__SMC_IND_ADDR_MASK 0xffffffffL
#define SMC_IND_INDEX_3__SMC_IND_ADDR__SHIFT 0x00000000
#define SMC_IND_INDEX__SMC_IND_ADDR_MASK 0xffffffffL
#define SMC_IND_INDEX__SMC_IND_ADDR__SHIFT 0x00000000
#define SMC_MESSAGE_0__SMC_MSG_MASK 0xffffffffL
#define SMC_MESSAGE_0__SMC_MSG__SHIFT 0x00000000
#define SMC_MESSAGE_1__SMC_MSG_MASK 0xffffffffL
#define SMC_MESSAGE_1__SMC_MSG__SHIFT 0x00000000
#define SMC_MESSAGE_2__SMC_MSG_MASK 0xffffffffL
#define SMC_MESSAGE_2__SMC_MSG__SHIFT 0x00000000
#define SMC_PC_C__smc_pc_c_MASK 0xffffffffL
#define SMC_PC_C__smc_pc_c__SHIFT 0x00000000
#define SMC_RESP_0__SMC_RESP_MASK 0xffffffffL
#define SMC_RESP_0__SMC_RESP__SHIFT 0x00000000
#define SMC_RESP_1__SMC_RESP_MASK 0xffffffffL
#define SMC_RESP_1__SMC_RESP__SHIFT 0x00000000
#define SMC_RESP_2__SMC_RESP_MASK 0xffffffffL
#define SMC_RESP_2__SMC_RESP__SHIFT 0x00000000
#define SPLL_CNTL_MODE__SPLL_CTLREQ_DLY_CNT_MASK 0x000ff000L
#define SPLL_CNTL_MODE__SPLL_CTLREQ_DLY_CNT__SHIFT 0x0000000c
#define SPLL_CNTL_MODE__SPLL_ENSAT_MASK 0x00000010L
#define SPLL_CNTL_MODE__SPLL_ENSAT__SHIFT 0x00000004
#define SPLL_CNTL_MODE__SPLL_FASTEN_MASK 0x00000008L
#define SPLL_CNTL_MODE__SPLL_FASTEN__SHIFT 0x00000003
#define SPLL_CNTL_MODE__SPLL_LEGACY_PDIV_MASK 0x00000002L
#define SPLL_CNTL_MODE__SPLL_LEGACY_PDIV__SHIFT 0x00000001
#define SPLL_CNTL_MODE__SPLL_RESET_EN_MASK 0x10000000L
#define SPLL_CNTL_MODE__SPLL_RESET_EN__SHIFT 0x0000001c
#define SPLL_CNTL_MODE__SPLL_SW_DIR_CONTROL_MASK 0x00000001L
#define SPLL_CNTL_MODE__SPLL_SW_DIR_CONTROL__SHIFT 0x00000000
#define SPLL_CNTL_MODE__SPLL_TEST_CLK_EXT_DIV_MASK 0x00000c00L
#define SPLL_CNTL_MODE__SPLL_TEST_CLK_EXT_DIV__SHIFT 0x0000000a
#define SPLL_CNTL_MODE__SPLL_TEST_MASK 0x00000004L
#define SPLL_CNTL_MODE__SPLL_TEST__SHIFT 0x00000002
#define SPLL_CNTL_MODE__SPLL_VCO_MODE_MASK 0x60000000L
#define SPLL_CNTL_MODE__SPLL_VCO_MODE__SHIFT 0x0000001d
#define TARGET_AND_CURRENT_PROFILE_INDEX_1__CURR_PCIE_INDEX_MASK 0x0f000000L
#define TARGET_AND_CURRENT_PROFILE_INDEX_1__CURR_PCIE_INDEX__SHIFT 0x00000018
#define TARGET_AND_CURRENT_PROFILE_INDEX_1__TARG_PCIE_INDEX_MASK 0xf0000000L
#define TARGET_AND_CURRENT_PROFILE_INDEX_1__TARG_PCIE_INDEX__SHIFT 0x0000001c
#define THM_TMON0_DEBUG__DEBUG_RDI_MASK 0x0000001fL
#define THM_TMON0_DEBUG__DEBUG_RDI__SHIFT 0x00000000
#define THM_TMON0_DEBUG__DEBUG_Z_MASK 0x0000ffe0L
#define THM_TMON0_DEBUG__DEBUG_Z__SHIFT 0x00000005
#define THM_TMON0_INT_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_INT_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_INT_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_INT_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_INT_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_INT_DATA__Z__SHIFT 0x00000000
#define THM_TMON0_RDIL0_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_RDIL0_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_RDIL0_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_RDIL0_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_RDIL0_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_RDIL0_DATA__Z__SHIFT 0x00000000
#define THM_TMON0_RDIL10_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_RDIL10_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_RDIL10_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_RDIL10_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_RDIL10_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_RDIL10_DATA__Z__SHIFT 0x00000000
#define THM_TMON0_RDIL11_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_RDIL11_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_RDIL11_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_RDIL11_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_RDIL11_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_RDIL11_DATA__Z__SHIFT 0x00000000
#define THM_TMON0_RDIL12_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_RDIL12_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_RDIL12_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_RDIL12_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_RDIL12_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_RDIL12_DATA__Z__SHIFT 0x00000000
#define THM_TMON0_RDIL13_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_RDIL13_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_RDIL13_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_RDIL13_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_RDIL13_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_RDIL13_DATA__Z__SHIFT 0x00000000
#define THM_TMON0_RDIL14_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_RDIL14_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_RDIL14_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_RDIL14_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_RDIL14_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_RDIL14_DATA__Z__SHIFT 0x00000000
#define THM_TMON0_RDIL15_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_RDIL15_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_RDIL15_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_RDIL15_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_RDIL15_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_RDIL15_DATA__Z__SHIFT 0x00000000
#define THM_TMON0_RDIL1_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_RDIL1_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_RDIL1_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_RDIL1_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_RDIL1_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_RDIL1_DATA__Z__SHIFT 0x00000000
#define THM_TMON0_RDIL2_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_RDIL2_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_RDIL2_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_RDIL2_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_RDIL2_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_RDIL2_DATA__Z__SHIFT 0x00000000
#define THM_TMON0_RDIL3_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_RDIL3_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_RDIL3_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_RDIL3_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_RDIL3_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_RDIL3_DATA__Z__SHIFT 0x00000000
#define THM_TMON0_RDIL4_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_RDIL4_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_RDIL4_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_RDIL4_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_RDIL4_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_RDIL4_DATA__Z__SHIFT 0x00000000
#define THM_TMON0_RDIL5_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_RDIL5_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_RDIL5_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_RDIL5_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_RDIL5_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_RDIL5_DATA__Z__SHIFT 0x00000000
#define THM_TMON0_RDIL6_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_RDIL6_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_RDIL6_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_RDIL6_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_RDIL6_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_RDIL6_DATA__Z__SHIFT 0x00000000
#define THM_TMON0_RDIL7_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_RDIL7_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_RDIL7_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_RDIL7_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_RDIL7_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_RDIL7_DATA__Z__SHIFT 0x00000000
#define THM_TMON0_RDIL8_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_RDIL8_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_RDIL8_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_RDIL8_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_RDIL8_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_RDIL8_DATA__Z__SHIFT 0x00000000
#define THM_TMON0_RDIL9_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_RDIL9_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_RDIL9_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_RDIL9_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_RDIL9_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_RDIL9_DATA__Z__SHIFT 0x00000000
#define THM_TMON0_RDIR0_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_RDIR0_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_RDIR0_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_RDIR0_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_RDIR0_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_RDIR0_DATA__Z__SHIFT 0x00000000
#define THM_TMON0_RDIR10_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_RDIR10_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_RDIR10_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_RDIR10_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_RDIR10_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_RDIR10_DATA__Z__SHIFT 0x00000000
#define THM_TMON0_RDIR11_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_RDIR11_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_RDIR11_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_RDIR11_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_RDIR11_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_RDIR11_DATA__Z__SHIFT 0x00000000
#define THM_TMON0_RDIR12_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_RDIR12_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_RDIR12_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_RDIR12_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_RDIR12_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_RDIR12_DATA__Z__SHIFT 0x00000000
#define THM_TMON0_RDIR13_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_RDIR13_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_RDIR13_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_RDIR13_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_RDIR13_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_RDIR13_DATA__Z__SHIFT 0x00000000
#define THM_TMON0_RDIR14_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_RDIR14_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_RDIR14_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_RDIR14_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_RDIR14_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_RDIR14_DATA__Z__SHIFT 0x00000000
#define THM_TMON0_RDIR15_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_RDIR15_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_RDIR15_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_RDIR15_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_RDIR15_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_RDIR15_DATA__Z__SHIFT 0x00000000
#define THM_TMON0_RDIR1_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_RDIR1_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_RDIR1_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_RDIR1_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_RDIR1_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_RDIR1_DATA__Z__SHIFT 0x00000000
#define THM_TMON0_RDIR2_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_RDIR2_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_RDIR2_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_RDIR2_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_RDIR2_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_RDIR2_DATA__Z__SHIFT 0x00000000
#define THM_TMON0_RDIR3_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_RDIR3_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_RDIR3_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_RDIR3_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_RDIR3_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_RDIR3_DATA__Z__SHIFT 0x00000000
#define THM_TMON0_RDIR4_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_RDIR4_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_RDIR4_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_RDIR4_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_RDIR4_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_RDIR4_DATA__Z__SHIFT 0x00000000
#define THM_TMON0_RDIR5_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_RDIR5_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_RDIR5_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_RDIR5_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_RDIR5_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_RDIR5_DATA__Z__SHIFT 0x00000000
#define THM_TMON0_RDIR6_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_RDIR6_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_RDIR6_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_RDIR6_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_RDIR6_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_RDIR6_DATA__Z__SHIFT 0x00000000
#define THM_TMON0_RDIR7_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_RDIR7_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_RDIR7_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_RDIR7_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_RDIR7_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_RDIR7_DATA__Z__SHIFT 0x00000000
#define THM_TMON0_RDIR8_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_RDIR8_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_RDIR8_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_RDIR8_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_RDIR8_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_RDIR8_DATA__Z__SHIFT 0x00000000
#define THM_TMON0_RDIR9_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON0_RDIR9_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON0_RDIR9_DATA__VALID_MASK 0x00000800L
#define THM_TMON0_RDIR9_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON0_RDIR9_DATA__Z_MASK 0x000007ffL
#define THM_TMON0_RDIR9_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_DEBUG__DEBUG_RDI_MASK 0x0000001fL
#define THM_TMON1_DEBUG__DEBUG_RDI__SHIFT 0x00000000
#define THM_TMON1_DEBUG__DEBUG_Z_MASK 0x0000ffe0L
#define THM_TMON1_DEBUG__DEBUG_Z__SHIFT 0x00000005
#define THM_TMON1_INT_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_INT_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_INT_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_INT_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_INT_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_INT_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_RDIL0_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_RDIL0_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_RDIL0_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_RDIL0_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_RDIL0_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_RDIL0_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_RDIL10_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_RDIL10_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_RDIL10_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_RDIL10_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_RDIL10_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_RDIL10_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_RDIL11_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_RDIL11_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_RDIL11_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_RDIL11_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_RDIL11_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_RDIL11_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_RDIL12_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_RDIL12_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_RDIL12_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_RDIL12_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_RDIL12_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_RDIL12_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_RDIL13_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_RDIL13_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_RDIL13_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_RDIL13_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_RDIL13_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_RDIL13_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_RDIL14_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_RDIL14_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_RDIL14_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_RDIL14_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_RDIL14_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_RDIL14_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_RDIL15_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_RDIL15_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_RDIL15_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_RDIL15_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_RDIL15_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_RDIL15_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_RDIL1_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_RDIL1_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_RDIL1_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_RDIL1_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_RDIL1_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_RDIL1_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_RDIL2_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_RDIL2_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_RDIL2_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_RDIL2_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_RDIL2_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_RDIL2_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_RDIL3_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_RDIL3_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_RDIL3_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_RDIL3_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_RDIL3_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_RDIL3_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_RDIL4_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_RDIL4_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_RDIL4_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_RDIL4_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_RDIL4_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_RDIL4_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_RDIL5_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_RDIL5_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_RDIL5_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_RDIL5_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_RDIL5_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_RDIL5_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_RDIL6_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_RDIL6_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_RDIL6_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_RDIL6_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_RDIL6_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_RDIL6_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_RDIL7_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_RDIL7_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_RDIL7_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_RDIL7_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_RDIL7_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_RDIL7_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_RDIL8_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_RDIL8_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_RDIL8_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_RDIL8_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_RDIL8_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_RDIL8_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_RDIL9_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_RDIL9_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_RDIL9_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_RDIL9_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_RDIL9_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_RDIL9_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_RDIR0_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_RDIR0_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_RDIR0_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_RDIR0_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_RDIR0_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_RDIR0_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_RDIR10_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_RDIR10_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_RDIR10_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_RDIR10_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_RDIR10_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_RDIR10_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_RDIR11_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_RDIR11_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_RDIR11_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_RDIR11_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_RDIR11_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_RDIR11_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_RDIR12_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_RDIR12_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_RDIR12_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_RDIR12_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_RDIR12_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_RDIR12_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_RDIR13_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_RDIR13_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_RDIR13_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_RDIR13_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_RDIR13_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_RDIR13_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_RDIR14_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_RDIR14_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_RDIR14_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_RDIR14_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_RDIR14_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_RDIR14_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_RDIR15_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_RDIR15_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_RDIR15_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_RDIR15_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_RDIR15_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_RDIR15_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_RDIR1_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_RDIR1_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_RDIR1_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_RDIR1_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_RDIR1_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_RDIR1_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_RDIR2_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_RDIR2_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_RDIR2_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_RDIR2_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_RDIR2_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_RDIR2_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_RDIR3_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_RDIR3_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_RDIR3_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_RDIR3_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_RDIR3_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_RDIR3_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_RDIR4_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_RDIR4_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_RDIR4_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_RDIR4_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_RDIR4_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_RDIR4_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_RDIR5_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_RDIR5_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_RDIR5_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_RDIR5_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_RDIR5_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_RDIR5_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_RDIR6_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_RDIR6_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_RDIR6_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_RDIR6_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_RDIR6_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_RDIR6_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_RDIR7_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_RDIR7_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_RDIR7_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_RDIR7_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_RDIR7_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_RDIR7_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_RDIR8_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_RDIR8_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_RDIR8_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_RDIR8_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_RDIR8_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_RDIR8_DATA__Z__SHIFT 0x00000000
#define THM_TMON1_RDIR9_DATA__TEMP_MASK 0x00fff000L
#define THM_TMON1_RDIR9_DATA__TEMP__SHIFT 0x0000000c
#define THM_TMON1_RDIR9_DATA__VALID_MASK 0x00000800L
#define THM_TMON1_RDIR9_DATA__VALID__SHIFT 0x0000000b
#define THM_TMON1_RDIR9_DATA__Z_MASK 0x000007ffL
#define THM_TMON1_RDIR9_DATA__Z__SHIFT 0x00000000

#endif
