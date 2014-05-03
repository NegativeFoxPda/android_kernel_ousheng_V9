/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 */
/* MediaTek Inc. (C) 2010. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
 * AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek Software")
 * have been modified by MediaTek Inc. All revisions are subject to any receiver's
 * applicable license agreements with MediaTek Inc.
 */

#ifndef TPD_CUSTOM_GT818B_H__
#define TPD_CUSTOM_GT818B_H__



/* Pre-defined definition */
#define TPD_AUTOUPDATE_FIRMWARE

#if (defined(DCT_V5)||defined(DCT_E5))
#define TPD_POWER_SOURCE_CUSTOM MT65XX_POWER_LDO_VGP5
#define TPD_POWER_SOURCE_1800 MT65XX_POWER_LDO_VMC1
#else
#define TPD_POWER_SOURCE_1800 MT65XX_POWER_LDO_VGP5
#endif
#define TPD_TYPE_CAPACITIVE
#define TPD_TYPE_RESISTIVE
#define TPD_POWER_SOURCE         MT6575_POWER_VGP2
#define TPD_I2C_NUMBER           0
#define TPD_WAKEUP_TRIAL         60
#define TPD_WAKEUP_DELAY         100

#define TPD_DELAY                (2*HZ/100)
#define TPD_CALIBRATION_MATRIX  {962,0,0,0,1600,0,0,0};

#define TPD_HAVE_CALIBRATION
#define TPD_HAVE_BUTTON               //report key as coordinate,Vibration feedback
#define TPD_CREATE_WR_NODE
#define TPD_ESD_PROTECT
#define TPD_HAVE_TREMBLE_ELIMINATION

#define TPD_NO_GPIO
#define TPD_RESET_PIN_ADDR   (PERICFG_BASE + 0xC000)
#define TPD_DITO_SENSOR
#define TPD_RESET_ISSUE_WORKAROUND
#define TPD_MAX_RESET_COUNT 3

#if (defined(FWVGA))

#define TPD_X_RES (480)
#define TPD_Y_RES (854)

#elif(defined(QHD))

#define TPD_X_RES (540)
#define TPD_Y_RES (960)

#elif defined(HD720)

#define TPD_X_RES (720)
#define TPD_Y_RES (1280)

#elif defined(WVGA)

#define TPD_X_RES (480)
#define TPD_Y_RES (800)
#elif defined(HVGA)

#define TPD_X_RES (320)
#define TPD_Y_RES (480)

#else

#define TPD_X_RES (480)
#define TPD_Y_RES (800)

#endif


#ifdef TPD_WARP_Y
#undef TPD_WARP_Y
#define TPD_WARP_Y(y) ( TPD_Y_RES - 1 - y )
#else
#define TPD_WARP_Y(y) y
#endif

#ifdef TPD_WARP_X
#undef TPD_WARP_X
#define TPD_WARP_X(x) ( TPD_X_RES - 1 - x )
#else
#define TPD_WARP_X(x) x
#endif
#define RES_AUTO_CONFIG 1

#define key_1           60,TPD_Y_RES+50              //auto define
#define key_2           180,TPD_Y_RES+50
#define key_3           300,TPD_Y_RES+50
#define key_4           420,TPD_Y_RES+50

#define TPD_KEY_COUNT           4

#if (defined(X1_1_N16))
#define TPD_KEYS                {KEY_BACK, KEY_MENU, KEY_HOMEPAGE, KEY_SEARCH}
#define TPD_KEYS_DIM            {{60,TPD_Y_RES+50,60,50},{180,TPD_Y_RES + 50,60,50},{300,TPD_Y_RES + 50,60,50},{420,TPD_Y_RES + 50,60,50}}
#else
#define TPD_KEYS                {KEY_HOMEPAGE, KEY_MENU, KEY_BACK, KEY_SEARCH}
#define TPD_KEYS_DIM            {{60,TPD_Y_RES+50,60,50},{180,TPD_Y_RES + 50,60,50},{300,TPD_Y_RES + 50,60,50},{420,TPD_Y_RES + 50,60,50}}
#endif

enum
{
    GT818,
    GT818X,
    GT868
};

//If there is only one vendor provide TP for you,puts the only one cfg_data(*.cfg) here,otherwise puts your vendor1 cfg_data here.
#if (defined(V6_V11))
static u8 gt818_cfg_data_vendor1[] =
{
};
static u8 gt818_cfg_data_vendor2[] =
{
};
static u8 gt818_cfg_data_vendor3[] =
{
};
static u8 gt818x_cfg_data_vendor1[] =
{
	0x00,0x02,0x04,0x06,0x08,0x0A,0x0C,0x0E,
	0x10,0x12,0x83,0x00,0x93,0x00,0xA3,0x00,
	0xB3,0x00,0xC3,0x00,0xD3,0x00,0xE3,0x00,
	0xF3,0x00,0x03,0x00,0x13,0x00,0x23,0x00,
	0x33,0x00,0x43,0x00,0x53,0x00,0x63,0x00,
	0x70,0x00,0x17,0x03,0x10,0x10,0x10,0x28,
	0x28,0x28,0x10,0x0F,0x0A,0x48,0x40,0x05,
	0x03,0x00,0x05,0xD0,0x02,0x00,0x05,0x00,
	0x00,0x5B,0x4D,0x55,0x48,0x00,0x00,0x23,
	0x14,0x05,0x05,0x00,0x00,0x00,0x00,0x00,
	0x14,0x10,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x56,0x8C,0x18,0x00,0x0D,0x50,
	0x40,0x25,0x20,0x00,0x00,0x00,0x00,0x00,
	0x10,0x01
};
static u8 gt818x_cfg_data_vendor2[] =
{
	0x00,0x02,0x04,0x06,0x08,0x0A,0x0C,0x0E,
	0x10,0x12,0x83,0x00,0x93,0x00,0xA3,0x00,
	0xB3,0x00,0xC3,0x00,0xD3,0x00,0xE3,0x00,
	0xF3,0x00,0x03,0x00,0x13,0x00,0x23,0x00,
	0x33,0x00,0x43,0x00,0x53,0x00,0x63,0x00,
	0x70,0x00,0x17,0x03,0x10,0x10,0x10,0x28,
	0x28,0x28,0x10,0x0F,0x0A,0x48,0x40,0x05,
	0x03,0x00,0x05,0xD0,0x02,0x00,0x05,0x00,
	0x00,0x5B,0x4D,0x55,0x48,0x00,0x00,0x23,
	0x14,0x05,0x05,0x00,0x00,0x00,0x00,0x00,
	0x14,0x10,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x56,0x8C,0x18,0x00,0x0D,0x50,
	0x40,0x25,0x20,0x00,0x00,0x00,0x00,0x00,
	0x10,0x01
};
static u8 gt818x_cfg_data_vendor3[] =
{
	0x00,0x02,0x04,0x06,0x08,0x0A,0x0C,0x0E,
	0x10,0x12,0x83,0x00,0x93,0x00,0xA3,0x00,
	0xB3,0x00,0xC3,0x00,0xD3,0x00,0xE3,0x00,
	0xF3,0x00,0x03,0x00,0x13,0x00,0x23,0x00,
	0x33,0x00,0x43,0x00,0x53,0x00,0x63,0x00,
	0x70,0x00,0x17,0x03,0x10,0x10,0x10,0x28,
	0x28,0x28,0x10,0x0F,0x0A,0x48,0x40,0x05,
	0x03,0x00,0x05,0xD0,0x02,0x00,0x05,0x00,
	0x00,0x5B,0x4D,0x55,0x48,0x00,0x00,0x23,
	0x14,0x05,0x05,0x00,0x00,0x00,0x00,0x00,
	0x14,0x10,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x56,0x8C,0x18,0x00,0x0D,0x50,
	0x40,0x25,0x20,0x00,0x00,0x00,0x00,0x00,
	0x10,0x01
};
static u8 gt868_cfg_data_vendor1[] =
{
};
static u8 gt868_cfg_data_vendor2[] =
{
};
static u8 gt868_cfg_data_vendor3[] =
{
};
#else
static u8 gt818_cfg_data_vendor1[] =
{
    0x00, 0x02, 0x04, 0x06, 0x08, 0x0A, 0x0C, 0x0E,
    0x10, 0x12, 0x60, 0x00, 0x50, 0x00, 0x40, 0x00,
    0x30, 0x00, 0x20, 0x00, 0x10, 0x00, 0x00, 0x00,
    0x70, 0x00, 0x80, 0x00, 0x90, 0x00, 0xA0, 0x00,
    0xB0, 0x00, 0xC0, 0x00, 0xD0, 0x00, 0xE0, 0x00,
    0x00, 0x00, 0x05, 0x03, 0x90, 0x90, 0x90, 0x30,
    0x30, 0x30, 0x0F, 0x0F, 0x0A, 0x50, 0x3C, 0x09,
    0x03, 0x00, 0x05, 0xE0, 0x01, 0x20, 0x03, 0x00,
    0x00, 0x00, 0x00, 0x40, 0x40, 0x00, 0x00, 0x01,
    0x19, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x20, 0x10, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x38,
    0x00, 0x3C, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x01
};
static u8 gt818x_cfg_data_vendor1[] =
{
    0x00, 0x02, 0x04, 0x06, 0x08, 0x0A, 0x0C, 0x0E,
    0x10, 0x12, 0x60, 0x00, 0x50, 0x00, 0x40, 0x00,
    0x30, 0x00, 0x20, 0x00, 0x10, 0x00, 0x00, 0x00,
    0x70, 0x00, 0x80, 0x00, 0x90, 0x00, 0xA0, 0x00,
    0xB0, 0x00, 0xC0, 0x00, 0xD0, 0x00, 0xE0, 0x00,
    0x00, 0x00, 0x05, 0x03, 0x90, 0x90, 0x90, 0x30,
    0x30, 0x30, 0x0F, 0x0F, 0x0A, 0x50, 0x3C, 0x09,
    0x03, 0x00, 0x05, 0xE0, 0x01, 0x20, 0x03, 0x00,
    0x00, 0x00, 0x00, 0x40, 0x40, 0x00, 0x00, 0x01,
    0x19, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x20, 0x10, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x38,
    0x00, 0x3C, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x01
};

static u8 gt868_cfg_data_vendor1[] =
{
    0x00, 0x02, 0x04, 0x06, 0x08, 0x0A, 0x0C, 0x0E,
    0x10, 0x12, 0x60, 0x00, 0x50, 0x00, 0x40, 0x00,
    0x30, 0x00, 0x20, 0x00, 0x10, 0x00, 0x00, 0x00,
    0x70, 0x00, 0x80, 0x00, 0x90, 0x00, 0xA0, 0x00,
    0xB0, 0x00, 0xC0, 0x00, 0xD0, 0x00, 0xE0, 0x00,
    0x00, 0x00, 0x05, 0x03, 0x90, 0x90, 0x90, 0x30,
    0x30, 0x30, 0x0F, 0x0F, 0x0A, 0x50, 0x3C, 0x09,
    0x03, 0x00, 0x05, 0xE0, 0x01, 0x20, 0x03, 0x00,
    0x00, 0x00, 0x00, 0x40, 0x40, 0x00, 0x00, 0x01,
    0x19, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x20, 0x10, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x38,
    0x00, 0x3C, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x01
};

//TODO: puts your vendor2 cfg data(*.cfg) here,in case there are more than one vendors to provide TP for you.
//Otherwise please remain it EMPTY!
static u8 gt818_cfg_data_vendor2[] =
{
};

static u8 gt818x_cfg_data_vendor2[] =
{
};

static u8 gt868_cfg_data_vendor2[] =
{
};

//TODO: puts your vendor3 cfg data(*.cfg) here,in case there are more than one vendors to provide TP for you.
//Otherwise please remain it EMPTY!
static u8 gt818_cfg_data_vendor3[] =
{
};

static u8 gt818x_cfg_data_vendor3[] =
{
};

static u8 gt868_cfg_data_vendor3[] =
{
};

#endif
//If you have no cfg_data_with_charger(*.cfg),please keep it the same with the above corresponding cfg_data
static u8 gt818_cfg_data_with_charger_vendor1[] =
{
    0x00, 0x02, 0x04, 0x06, 0x08, 0x0A, 0x0C, 0x0E,
    0x10, 0x12, 0x40, 0x00, 0xC0, 0x00, 0x50, 0x00,
    0xD0, 0x00, 0x60, 0x00, 0xE0, 0x00, 0x70, 0x00,
    0x30, 0x00, 0x80, 0x00, 0x20, 0x00, 0x90, 0x00,
    0x10, 0x00, 0xA0, 0x00, 0x00, 0x00, 0xB0, 0x00,
    0xB0, 0x00, 0x07, 0x03, 0x90, 0x90, 0x90, 0x2A,
    0x2A, 0x2A, 0x0F, 0x0F, 0x0A, 0x40, 0x30, 0x0D,
    0x03, 0x00, 0x05, 0x00, 0x10, 0x00, 0x10, 0x00,
    0x00, 0x5C, 0x5A, 0x60, 0x5E, 0x00, 0x00, 0x03,
    0x19, 0x05, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x20, 0x10, 0xEF, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x01
};

static u8 gt818x_cfg_data_with_charger_vendor1[] =
{
    0x00, 0x02, 0x04, 0x06, 0x08, 0x0A, 0x0C, 0x0E,
    0x10, 0x12, 0x40, 0x00, 0xC0, 0x00, 0x50, 0x00,
    0xD0, 0x00, 0x60, 0x00, 0xE0, 0x00, 0x70, 0x00,
    0x30, 0x00, 0x80, 0x00, 0x20, 0x00, 0x90, 0x00,
    0x10, 0x00, 0xA0, 0x00, 0x00, 0x00, 0xB0, 0x00,
    0xB0, 0x00, 0x07, 0x03, 0x90, 0x90, 0x90, 0x2A,
    0x2A, 0x2A, 0x0F, 0x0F, 0x0A, 0x40, 0x30, 0x0D,
    0x03, 0x00, 0x05, 0x00, 0x10, 0x00, 0x10, 0x00,
    0x00, 0x5C, 0x5A, 0x60, 0x5E, 0x00, 0x00, 0x03,
    0x19, 0x05, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x20, 0x10, 0xEF, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x01
};

static u8 gt868_cfg_data_with_charger_vendor1[] =
{
    0x00, 0x02, 0x04, 0x06, 0x08, 0x0A, 0x0C, 0x0E,
    0x10, 0x12, 0x40, 0x00, 0xC0, 0x00, 0x50, 0x00,
    0xD0, 0x00, 0x60, 0x00, 0xE0, 0x00, 0x70, 0x00,
    0x30, 0x00, 0x80, 0x00, 0x20, 0x00, 0x90, 0x00,
    0x10, 0x00, 0xA0, 0x00, 0x00, 0x00, 0xB0, 0x00,
    0xB0, 0x00, 0x07, 0x03, 0x90, 0x90, 0x90, 0x2A,
    0x2A, 0x2A, 0x0F, 0x0F, 0x0A, 0x40, 0x30, 0x0D,
    0x03, 0x00, 0x05, 0x00, 0x10, 0x00, 0x10, 0x00,
    0x00, 0x5C, 0x5A, 0x60, 0x5E, 0x00, 0x00, 0x03,
    0x19, 0x05, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x20, 0x10, 0xEF, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x01
};

//TODO: puts your vendor2 cfg data with charger(*.cfg) here,in case there are more than one vendors to provide TP for you.
//Otherwise please remain it EMPTY!
static u8 gt818_cfg_data_with_charger_vendor2[] =
{
};

static u8 gt818x_cfg_data_with_charger_vendor2[] =
{
};

static u8 gt868_cfg_data_with_charger_vendor2[] =
{
};

//TODO: puts your vendor3 cfg data with charger(*.cfg) here,in case there are more than one vendors to provide TP for you.
//Otherwise please remain it EMPTY!
static u8 gt818_cfg_data_with_charger_vendor3[] =
{
};

static u8 gt818x_cfg_data_with_charger_vendor3[] =
{
};

static u8 gt868_cfg_data_with_charger_vendor3[] =
{
    0x00, 0x02, 0x04, 0x06, 0x08, 0x0A, 0x0C, 0x0E,
    0x10, 0x12, 0x40, 0x00, 0xC0, 0x00, 0x50, 0x00,
    0xD0, 0x00, 0x60, 0x00, 0xE0, 0x00, 0x70, 0x00,
    0x30, 0x00, 0x80, 0x00, 0x20, 0x00, 0x90, 0x00,
    0x10, 0x00, 0xA0, 0x00, 0x00, 0x00, 0xB0, 0x00,
    0xB0, 0x00, 0x07, 0x03, 0x90, 0x90, 0x90, 0x2A,
    0x2A, 0x2A, 0x0F, 0x0F, 0x0A, 0x40, 0x30, 0x0D,
    0x03, 0x00, 0x05, 0x00, 0x10, 0x00, 0x10, 0x00,
    0x00, 0x5C, 0x5A, 0x60, 0x5E, 0x00, 0x00, 0x03,
    0x19, 0x05, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x20, 0x10, 0xEF, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x01
};

static u8 cfg_sensor_id = 0;
static u8 *gt818_cfg_data_ptr[] = { gt818_cfg_data_vendor1, gt818_cfg_data_vendor2, gt818_cfg_data_vendor3 };
static u8 *gt818x_cfg_data_ptr[] = { gt818x_cfg_data_vendor1, gt818x_cfg_data_vendor2, gt818x_cfg_data_vendor3 };
static u8 *gt868_cfg_data_ptr[] = { gt868_cfg_data_vendor1, gt868_cfg_data_vendor2, gt868_cfg_data_vendor3 };

static u8 gt818_cfg_data_len[] = { sizeof(gt818_cfg_data_vendor1) / sizeof(gt818_cfg_data_vendor1[0]),
                                   sizeof(gt818_cfg_data_vendor2) / sizeof(gt818_cfg_data_vendor2[0]),
                                   sizeof(gt818_cfg_data_vendor3) / sizeof(gt818_cfg_data_vendor3[0])
                                 };
static u8 gt818x_cfg_data_len[] = { sizeof(gt818x_cfg_data_vendor1) / sizeof(gt818x_cfg_data_vendor1[0]),
                                    sizeof(gt818x_cfg_data_vendor2) / sizeof(gt818x_cfg_data_vendor2[0]),
                                    sizeof(gt818x_cfg_data_vendor3) / sizeof(gt818x_cfg_data_vendor3[0])
                                  };
static u8 gt868_cfg_data_len[] = { sizeof(gt868_cfg_data_vendor1) / sizeof(gt868_cfg_data_vendor1[0]),
                                   sizeof(gt868_cfg_data_vendor2) / sizeof(gt868_cfg_data_vendor2[0]),
                                   sizeof(gt868_cfg_data_vendor3) / sizeof(gt868_cfg_data_vendor3[0])
                                 };

static u8 *gt818_cfg_data_with_charger_ptr[] = { gt818_cfg_data_with_charger_vendor1, gt818_cfg_data_with_charger_vendor2, gt818_cfg_data_with_charger_vendor3 };
static u8 *gt818x_cfg_data_with_charger_ptr[] = { gt818x_cfg_data_with_charger_vendor1, gt818x_cfg_data_with_charger_vendor2, gt818x_cfg_data_with_charger_vendor3 };
static u8 *gt868_cfg_data_with_charger_ptr[] = { gt868_cfg_data_with_charger_vendor1, gt868_cfg_data_with_charger_vendor2, gt868_cfg_data_with_charger_vendor3 };

static u8 gt818_cfg_data_with_charger_len[] = { sizeof(gt818_cfg_data_with_charger_vendor1) / sizeof(gt818_cfg_data_with_charger_vendor1[0]),
                                                sizeof(gt818_cfg_data_with_charger_vendor2) / sizeof(gt818_cfg_data_with_charger_vendor2[0]),
                                                sizeof(gt818_cfg_data_with_charger_vendor3) / sizeof(gt818_cfg_data_with_charger_vendor3[0])
                                              };
static u8 gt818x_cfg_data_with_charger_len[] = { sizeof(gt818x_cfg_data_with_charger_vendor1) / sizeof(gt818x_cfg_data_with_charger_vendor1[0]),
                                                 sizeof(gt818x_cfg_data_with_charger_vendor2) / sizeof(gt818x_cfg_data_with_charger_vendor2[0]),
                                                 sizeof(gt818x_cfg_data_with_charger_vendor3) / sizeof(gt818x_cfg_data_with_charger_vendor3[0])
                                               };
static u8 gt868_cfg_data_with_charger_len[] = { sizeof(gt868_cfg_data_with_charger_vendor1) / sizeof(gt868_cfg_data_with_charger_vendor1[0]),
                                                sizeof(gt868_cfg_data_with_charger_vendor2) / sizeof(gt868_cfg_data_with_charger_vendor2[0]),
                                                sizeof(gt868_cfg_data_with_charger_vendor3) / sizeof(gt868_cfg_data_with_charger_vendor3[0])
                                              };

#endif /* TOUCHPANEL_H__ */