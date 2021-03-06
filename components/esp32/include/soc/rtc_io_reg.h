// Copyright 2015-2016 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#ifndef _SOC_RTC_IO_REG_H_
#define _SOC_RTC_IO_REG_H_

#include "soc.h"

#define RTC_GPIO_OUT (DR_REG_RTCIO_BASE + 0x0)
#define RTC_IO_RTC_GPIO_OUT_DATA 0x0003FFFF
#define RTC_IO_RTC_GPIO_OUT_DATA_S 14

#define RTC_GPIO_OUT_W1TS (DR_REG_RTCIO_BASE + 0x4)
#define RTC_IO_RTC_GPIO_OUT_DATA_W1TS 0x0003FFFF
#define RTC_IO_RTC_GPIO_OUT_DATA_W1TS_S 14

#define RTC_GPIO_OUT_W1TC (DR_REG_RTCIO_BASE + 0x8)
#define RTC_IO_RTC_GPIO_OUT_DATA_W1TC 0x0003FFFF
#define RTC_IO_RTC_GPIO_OUT_DATA_W1TC_S 14

#define RTC_GPIO_ENABLE (DR_REG_RTCIO_BASE + 0xc)
#define RTC_IO_RTC_GPIO_ENABLE 0x0003FFFF
#define RTC_IO_RTC_GPIO_ENABLE_S 14

#define RTC_GPIO_ENABLE_W1TS (DR_REG_RTCIO_BASE + 0x10)
#define RTC_IO_RTC_GPIO_ENABLE_W1TS 0x0003FFFF
#define RTC_IO_RTC_GPIO_ENABLE_W1TS_S 14

#define RTC_GPIO_ENABLE_W1TC (DR_REG_RTCIO_BASE + 0x14)
#define RTC_IO_RTC_GPIO_ENABLE_W1TC 0x0003FFFF
#define RTC_IO_RTC_GPIO_ENABLE_W1TC_S 14

#define RTC_GPIO_STATUS (DR_REG_RTCIO_BASE + 0x18)
#define RTC_IO_RTC_GPIO_STATUS_INT 0x0003FFFF
#define RTC_IO_RTC_GPIO_STATUS_INT_S 14

#define RTC_GPIO_STATUS_W1TS (DR_REG_RTCIO_BASE + 0x1c)
#define RTC_IO_RTC_GPIO_STATUS_INT_W1TS 0x0003FFFF
#define RTC_IO_RTC_GPIO_STATUS_INT_W1TS_S 14

#define RTC_GPIO_STATUS_W1TC (DR_REG_RTCIO_BASE + 0x20)
#define RTC_IO_RTC_GPIO_STATUS_INT_W1TC 0x0003FFFF
#define RTC_IO_RTC_GPIO_STATUS_INT_W1TC_S 14

#define RTC_GPIO_IN (DR_REG_RTCIO_BASE + 0x24)
#define RTC_IO_RTC_GPIO_IN_NEXT 0x0003FFFF
#define RTC_IO_RTC_GPIO_IN_NEXT_S 14

#define RTC_GPIO_PIN0 (DR_REG_RTCIO_BASE + 0x28)
#define RTC_IO_RTC_GPIO_PIN0_WAKEUP_ENABLE (BIT(10))
#define RTC_IO_RTC_GPIO_PIN0_WAKEUP_ENABLE_S 10
#define RTC_IO_RTC_GPIO_PIN0_INT_TYPE 0x00000007
#define RTC_IO_RTC_GPIO_PIN0_INT_TYPE_S 7
#define RTC_IO_RTC_GPIO_PIN0_PAD_DRIVER (BIT(2))
#define RTC_IO_RTC_GPIO_PIN0_PAD_DRIVER_S 2

#define RTC_GPIO_PIN1 (DR_REG_RTCIO_BASE + 0x2c)
#define RTC_IO_RTC_GPIO_PIN1_WAKEUP_ENABLE (BIT(10))
#define RTC_IO_RTC_GPIO_PIN1_WAKEUP_ENABLE_S 10
#define RTC_IO_RTC_GPIO_PIN1_INT_TYPE 0x00000007
#define RTC_IO_RTC_GPIO_PIN1_INT_TYPE_S 7
#define RTC_IO_RTC_GPIO_PIN1_PAD_DRIVER (BIT(2))
#define RTC_IO_RTC_GPIO_PIN1_PAD_DRIVER_S 2

#define RTC_GPIO_PIN2 (DR_REG_RTCIO_BASE + 0x30)
#define RTC_IO_RTC_GPIO_PIN2_WAKEUP_ENABLE (BIT(10))
#define RTC_IO_RTC_GPIO_PIN2_WAKEUP_ENABLE_S 10
#define RTC_IO_RTC_GPIO_PIN2_INT_TYPE 0x00000007
#define RTC_IO_RTC_GPIO_PIN2_INT_TYPE_S 7
#define RTC_IO_RTC_GPIO_PIN2_PAD_DRIVER (BIT(2))
#define RTC_IO_RTC_GPIO_PIN2_PAD_DRIVER_S 2

#define RTC_GPIO_PIN3 (DR_REG_RTCIO_BASE + 0x34)
#define RTC_IO_RTC_GPIO_PIN3_WAKEUP_ENABLE (BIT(10))
#define RTC_IO_RTC_GPIO_PIN3_WAKEUP_ENABLE_S 10
#define RTC_IO_RTC_GPIO_PIN3_INT_TYPE 0x00000007
#define RTC_IO_RTC_GPIO_PIN3_INT_TYPE_S 7
#define RTC_IO_RTC_GPIO_PIN3_PAD_DRIVER (BIT(2))
#define RTC_IO_RTC_GPIO_PIN3_PAD_DRIVER_S 2

#define RTC_GPIO_PIN4 (DR_REG_RTCIO_BASE + 0x38)
#define RTC_IO_RTC_GPIO_PIN4_WAKEUP_ENABLE (BIT(10))
#define RTC_IO_RTC_GPIO_PIN4_WAKEUP_ENABLE_S 10
#define RTC_IO_RTC_GPIO_PIN4_INT_TYPE 0x00000007
#define RTC_IO_RTC_GPIO_PIN4_INT_TYPE_S 7
#define RTC_IO_RTC_GPIO_PIN4_PAD_DRIVER (BIT(2))
#define RTC_IO_RTC_GPIO_PIN4_PAD_DRIVER_S 2

#define RTC_GPIO_PIN5 (DR_REG_RTCIO_BASE + 0x3c)
#define RTC_IO_RTC_GPIO_PIN5_WAKEUP_ENABLE (BIT(10))
#define RTC_IO_RTC_GPIO_PIN5_WAKEUP_ENABLE_S 10
#define RTC_IO_RTC_GPIO_PIN5_INT_TYPE 0x00000007
#define RTC_IO_RTC_GPIO_PIN5_INT_TYPE_S 7
#define RTC_IO_RTC_GPIO_PIN5_PAD_DRIVER (BIT(2))
#define RTC_IO_RTC_GPIO_PIN5_PAD_DRIVER_S 2

#define RTC_GPIO_PIN6 (DR_REG_RTCIO_BASE + 0x40)
#define RTC_IO_RTC_GPIO_PIN6_WAKEUP_ENABLE (BIT(10))
#define RTC_IO_RTC_GPIO_PIN6_WAKEUP_ENABLE_S 10
#define RTC_IO_RTC_GPIO_PIN6_INT_TYPE 0x00000007
#define RTC_IO_RTC_GPIO_PIN6_INT_TYPE_S 7
#define RTC_IO_RTC_GPIO_PIN6_PAD_DRIVER (BIT(2))
#define RTC_IO_RTC_GPIO_PIN6_PAD_DRIVER_S 2

#define RTC_GPIO_PIN7 (DR_REG_RTCIO_BASE + 0x44)
#define RTC_IO_RTC_GPIO_PIN7_WAKEUP_ENABLE (BIT(10))
#define RTC_IO_RTC_GPIO_PIN7_WAKEUP_ENABLE_S 10
#define RTC_IO_RTC_GPIO_PIN7_INT_TYPE 0x00000007
#define RTC_IO_RTC_GPIO_PIN7_INT_TYPE_S 7
#define RTC_IO_RTC_GPIO_PIN7_PAD_DRIVER (BIT(2))
#define RTC_IO_RTC_GPIO_PIN7_PAD_DRIVER_S 2

#define RTC_GPIO_PIN8 (DR_REG_RTCIO_BASE + 0x48)
#define RTC_IO_RTC_GPIO_PIN8_WAKEUP_ENABLE (BIT(10))
#define RTC_IO_RTC_GPIO_PIN8_WAKEUP_ENABLE_S 10
#define RTC_IO_RTC_GPIO_PIN8_INT_TYPE 0x00000007
#define RTC_IO_RTC_GPIO_PIN8_INT_TYPE_S 7
#define RTC_IO_RTC_GPIO_PIN8_PAD_DRIVER (BIT(2))
#define RTC_IO_RTC_GPIO_PIN8_PAD_DRIVER_S 2

#define RTC_GPIO_PIN9 (DR_REG_RTCIO_BASE + 0x4c)
#define RTC_IO_RTC_GPIO_PIN9_WAKEUP_ENABLE (BIT(10))
#define RTC_IO_RTC_GPIO_PIN9_WAKEUP_ENABLE_S 10
#define RTC_IO_RTC_GPIO_PIN9_INT_TYPE 0x00000007
#define RTC_IO_RTC_GPIO_PIN9_INT_TYPE_S 7
#define RTC_IO_RTC_GPIO_PIN9_PAD_DRIVER (BIT(2))
#define RTC_IO_RTC_GPIO_PIN9_PAD_DRIVER_S 2

#define RTC_GPIO_PIN10 (DR_REG_RTCIO_BASE + 0x50)
#define RTC_IO_RTC_GPIO_PIN10_WAKEUP_ENABLE (BIT(10))
#define RTC_IO_RTC_GPIO_PIN10_WAKEUP_ENABLE_S 10
#define RTC_IO_RTC_GPIO_PIN10_INT_TYPE 0x00000007
#define RTC_IO_RTC_GPIO_PIN10_INT_TYPE_S 7
#define RTC_IO_RTC_GPIO_PIN10_PAD_DRIVER (BIT(2))
#define RTC_IO_RTC_GPIO_PIN10_PAD_DRIVER_S 2

#define RTC_GPIO_PIN11 (DR_REG_RTCIO_BASE + 0x54)
#define RTC_IO_RTC_GPIO_PIN11_WAKEUP_ENABLE (BIT(10))
#define RTC_IO_RTC_GPIO_PIN11_WAKEUP_ENABLE_S 10
#define RTC_IO_RTC_GPIO_PIN11_INT_TYPE 0x00000007
#define RTC_IO_RTC_GPIO_PIN11_INT_TYPE_S 7
#define RTC_IO_RTC_GPIO_PIN11_PAD_DRIVER (BIT(2))
#define RTC_IO_RTC_GPIO_PIN11_PAD_DRIVER_S 2

#define RTC_GPIO_PIN12 (DR_REG_RTCIO_BASE + 0x58)
#define RTC_IO_RTC_GPIO_PIN12_WAKEUP_ENABLE (BIT(10))
#define RTC_IO_RTC_GPIO_PIN12_WAKEUP_ENABLE_S 10
#define RTC_IO_RTC_GPIO_PIN12_INT_TYPE 0x00000007
#define RTC_IO_RTC_GPIO_PIN12_INT_TYPE_S 7
#define RTC_IO_RTC_GPIO_PIN12_PAD_DRIVER (BIT(2))
#define RTC_IO_RTC_GPIO_PIN12_PAD_DRIVER_S 2

#define RTC_GPIO_PIN13 (DR_REG_RTCIO_BASE + 0x5c)
#define RTC_IO_RTC_GPIO_PIN13_WAKEUP_ENABLE (BIT(10))
#define RTC_IO_RTC_GPIO_PIN13_WAKEUP_ENABLE_S 10
#define RTC_IO_RTC_GPIO_PIN13_INT_TYPE 0x00000007
#define RTC_IO_RTC_GPIO_PIN13_INT_TYPE_S 7
#define RTC_IO_RTC_GPIO_PIN13_PAD_DRIVER (BIT(2))
#define RTC_IO_RTC_GPIO_PIN13_PAD_DRIVER_S 2

#define RTC_GPIO_PIN14 (DR_REG_RTCIO_BASE + 0x60)
#define RTC_IO_RTC_GPIO_PIN14_WAKEUP_ENABLE (BIT(10))
#define RTC_IO_RTC_GPIO_PIN14_WAKEUP_ENABLE_S 10
#define RTC_IO_RTC_GPIO_PIN14_INT_TYPE 0x00000007
#define RTC_IO_RTC_GPIO_PIN14_INT_TYPE_S 7
#define RTC_IO_RTC_GPIO_PIN14_PAD_DRIVER (BIT(2))
#define RTC_IO_RTC_GPIO_PIN14_PAD_DRIVER_S 2

#define RTC_GPIO_PIN15 (DR_REG_RTCIO_BASE + 0x64)
#define RTC_IO_RTC_GPIO_PIN15_WAKEUP_ENABLE (BIT(10))
#define RTC_IO_RTC_GPIO_PIN15_WAKEUP_ENABLE_S 10
#define RTC_IO_RTC_GPIO_PIN15_INT_TYPE 0x00000007
#define RTC_IO_RTC_GPIO_PIN15_INT_TYPE_S 7
#define RTC_IO_RTC_GPIO_PIN15_PAD_DRIVER (BIT(2))
#define RTC_IO_RTC_GPIO_PIN15_PAD_DRIVER_S 2

#define RTC_GPIO_PIN16 (DR_REG_RTCIO_BASE + 0x68)
#define RTC_IO_RTC_GPIO_PIN16_WAKEUP_ENABLE (BIT(10))
#define RTC_IO_RTC_GPIO_PIN16_WAKEUP_ENABLE_S 10
#define RTC_IO_RTC_GPIO_PIN16_INT_TYPE 0x00000007
#define RTC_IO_RTC_GPIO_PIN16_INT_TYPE_S 7
#define RTC_IO_RTC_GPIO_PIN16_PAD_DRIVER (BIT(2))
#define RTC_IO_RTC_GPIO_PIN16_PAD_DRIVER_S 2

#define RTC_GPIO_PIN17 (DR_REG_RTCIO_BASE + 0x6c)
#define RTC_IO_RTC_GPIO_PIN17_WAKEUP_ENABLE (BIT(10))
#define RTC_IO_RTC_GPIO_PIN17_WAKEUP_ENABLE_S 10
#define RTC_IO_RTC_GPIO_PIN17_INT_TYPE 0x00000007
#define RTC_IO_RTC_GPIO_PIN17_INT_TYPE_S 7
#define RTC_IO_RTC_GPIO_PIN17_PAD_DRIVER (BIT(2))
#define RTC_IO_RTC_GPIO_PIN17_PAD_DRIVER_S 2

#define RTC_DEBUG_SEL (DR_REG_RTCIO_BASE + 0x70)
#define RTC_IO_RTC_DEBUG_12M_NO_GATING (BIT(25))
#define RTC_IO_RTC_DEBUG_12M_NO_GATING_S 25
#define RTC_IO_RTC_DEBUG_SEL4 0x0000001F
#define RTC_IO_RTC_DEBUG_SEL4_S 20
#define RTC_IO_RTC_DEBUG_SEL3 0x0000001F
#define RTC_IO_RTC_DEBUG_SEL3_S 15
#define RTC_IO_RTC_DEBUG_SEL2 0x0000001F
#define RTC_IO_RTC_DEBUG_SEL2_S 10
#define RTC_IO_RTC_DEBUG_SEL1 0x0000001F
#define RTC_IO_RTC_DEBUG_SEL1_S 5
#define RTC_IO_RTC_DEBUG_SEL0 0x0000001F
#define RTC_IO_RTC_DEBUG_SEL0_S 0

#define DIG_PAD_HOLD (DR_REG_RTCIO_BASE + 0x74)
#define RTC_IO_DIG_PAD_HOLD 0xFFFFFFFF
#define RTC_IO_DIG_PAD_HOLD_S 0

#define HALL_SENS (DR_REG_RTCIO_BASE + 0x78)
#define RTC_IO_XPD_HALL (BIT(31))
#define RTC_IO_XPD_HALL_S 31
#define RTC_IO_HALL_PHASE (BIT(30))
#define RTC_IO_HALL_PHASE_S 30

#define SENSOR_PADS (DR_REG_RTCIO_BASE + 0x7c)
#define RTC_IO_SENSE1_HOLD (BIT(31))
#define RTC_IO_SENSE1_HOLD_S 31
#define RTC_IO_SENSE2_HOLD (BIT(30))
#define RTC_IO_SENSE2_HOLD_S 30
#define RTC_IO_SENSE3_HOLD (BIT(29))
#define RTC_IO_SENSE3_HOLD_S 29
#define RTC_IO_SENSE4_HOLD (BIT(28))
#define RTC_IO_SENSE4_HOLD_S 28
#define RTC_IO_SENSE1_MUX_SEL (BIT(27))
#define RTC_IO_SENSE1_MUX_SEL_S 27
#define RTC_IO_SENSE2_MUX_SEL (BIT(26))
#define RTC_IO_SENSE2_MUX_SEL_S 26
#define RTC_IO_SENSE3_MUX_SEL (BIT(25))
#define RTC_IO_SENSE3_MUX_SEL_S 25
#define RTC_IO_SENSE4_MUX_SEL (BIT(24))
#define RTC_IO_SENSE4_MUX_SEL_S 24
#define RTC_IO_SENSE1_FUN_SEL 0x00000003
#define RTC_IO_SENSE1_FUN_SEL_S 22
#define RTC_IO_SENSE1_SLP_SEL (BIT(21))
#define RTC_IO_SENSE1_SLP_SEL_S 21
#define RTC_IO_SENSE1_SLP_IE (BIT(20))
#define RTC_IO_SENSE1_SLP_IE_S 20
#define RTC_IO_SENSE1_FUN_IE (BIT(19))
#define RTC_IO_SENSE1_FUN_IE_S 19
#define RTC_IO_SENSE2_FUN_SEL 0x00000003
#define RTC_IO_SENSE2_FUN_SEL_S 17
#define RTC_IO_SENSE2_SLP_SEL (BIT(16))
#define RTC_IO_SENSE2_SLP_SEL_S 16
#define RTC_IO_SENSE2_SLP_IE (BIT(15))
#define RTC_IO_SENSE2_SLP_IE_S 15
#define RTC_IO_SENSE2_FUN_IE (BIT(14))
#define RTC_IO_SENSE2_FUN_IE_S 14
#define RTC_IO_SENSE3_FUN_SEL 0x00000003
#define RTC_IO_SENSE3_FUN_SEL_S 12
#define RTC_IO_SENSE3_SLP_SEL (BIT(11))
#define RTC_IO_SENSE3_SLP_SEL_S 11
#define RTC_IO_SENSE3_SLP_IE (BIT(10))
#define RTC_IO_SENSE3_SLP_IE_S 10
#define RTC_IO_SENSE3_FUN_IE (BIT(9))
#define RTC_IO_SENSE3_FUN_IE_S 9
#define RTC_IO_SENSE4_FUN_SEL 0x00000003
#define RTC_IO_SENSE4_FUN_SEL_S 7
#define RTC_IO_SENSE4_SLP_SEL (BIT(6))
#define RTC_IO_SENSE4_SLP_SEL_S 6
#define RTC_IO_SENSE4_SLP_IE (BIT(5))
#define RTC_IO_SENSE4_SLP_IE_S 5
#define RTC_IO_SENSE4_FUN_IE (BIT(4))
#define RTC_IO_SENSE4_FUN_IE_S 4

#define ADC_PAD (DR_REG_RTCIO_BASE + 0x80)
#define RTC_IO_ADC1_HOLD (BIT(31))
#define RTC_IO_ADC1_HOLD_S 31
#define RTC_IO_ADC2_HOLD (BIT(30))
#define RTC_IO_ADC2_HOLD_S 30
#define RTC_IO_ADC1_MUX_SEL (BIT(29))
#define RTC_IO_ADC1_MUX_SEL_S 29
#define RTC_IO_ADC2_MUX_SEL (BIT(28))
#define RTC_IO_ADC2_MUX_SEL_S 28
#define RTC_IO_ADC1_FUN_SEL 0x00000003
#define RTC_IO_ADC1_FUN_SEL_S 26
#define RTC_IO_ADC1_SLP_SEL (BIT(25))
#define RTC_IO_ADC1_SLP_SEL_S 25
#define RTC_IO_ADC1_SLP_IE (BIT(24))
#define RTC_IO_ADC1_SLP_IE_S 24
#define RTC_IO_ADC1_FUN_IE (BIT(23))
#define RTC_IO_ADC1_FUN_IE_S 23
#define RTC_IO_ADC2_FUN_SEL 0x00000003
#define RTC_IO_ADC2_FUN_SEL_S 21
#define RTC_IO_ADC2_SLP_SEL (BIT(20))
#define RTC_IO_ADC2_SLP_SEL_S 20
#define RTC_IO_ADC2_SLP_IE (BIT(19))
#define RTC_IO_ADC2_SLP_IE_S 19
#define RTC_IO_ADC2_FUN_IE (BIT(18))
#define RTC_IO_ADC2_FUN_IE_S 18

#define PAD_DAC1 (DR_REG_RTCIO_BASE + 0x84)
#define RTC_IO_PDAC1_DRV 0x00000003
#define RTC_IO_PDAC1_DRV_S 30
#define RTC_IO_PDAC1_HOLD (BIT(29))
#define RTC_IO_PDAC1_HOLD_S 29
#define RTC_IO_PDAC1_RDE (BIT(28))
#define RTC_IO_PDAC1_RDE_S 28
#define RTC_IO_PDAC1_RUE (BIT(27))
#define RTC_IO_PDAC1_RUE_S 27
#define RTC_IO_PDAC1_DAC 0x000000FF
#define RTC_IO_PDAC1_DAC_S 19
#define RTC_IO_PDAC1_XPD_DAC (BIT(18))
#define RTC_IO_PDAC1_XPD_DAC_S 18
#define RTC_IO_PDAC1_MUX_SEL (BIT(17))
#define RTC_IO_PDAC1_MUX_SEL_S 17
#define RTC_IO_PDAC1_FUN_SEL 0x00000003
#define RTC_IO_PDAC1_FUN_SEL_S 15
#define RTC_IO_PDAC1_SLP_SEL (BIT(14))
#define RTC_IO_PDAC1_SLP_SEL_S 14
#define RTC_IO_PDAC1_SLP_IE (BIT(13))
#define RTC_IO_PDAC1_SLP_IE_S 13
#define RTC_IO_PDAC1_SLP_OE (BIT(12))
#define RTC_IO_PDAC1_SLP_OE_S 12
#define RTC_IO_PDAC1_FUN_IE (BIT(11))
#define RTC_IO_PDAC1_FUN_IE_S 11
#define RTC_IO_PDAC1_DAC_XPD_FORCE (BIT(10))
#define RTC_IO_PDAC1_DAC_XPD_FORCE_S 10

#define PAD_DAC2 (DR_REG_RTCIO_BASE + 0x88)
#define RTC_IO_PDAC2_DRV 0x00000003
#define RTC_IO_PDAC2_DRV_S 30
#define RTC_IO_PDAC2_HOLD (BIT(29))
#define RTC_IO_PDAC2_HOLD_S 29
#define RTC_IO_PDAC2_RDE (BIT(28))
#define RTC_IO_PDAC2_RDE_S 28
#define RTC_IO_PDAC2_RUE (BIT(27))
#define RTC_IO_PDAC2_RUE_S 27
#define RTC_IO_PDAC2_DAC 0x000000FF
#define RTC_IO_PDAC2_DAC_S 19
#define RTC_IO_PDAC2_XPD_DAC (BIT(18))
#define RTC_IO_PDAC2_XPD_DAC_S 18
#define RTC_IO_PDAC2_MUX_SEL (BIT(17))
#define RTC_IO_PDAC2_MUX_SEL_S 17
#define RTC_IO_PDAC2_FUN_SEL 0x00000003
#define RTC_IO_PDAC2_FUN_SEL_S 15
#define RTC_IO_PDAC2_SLP_SEL (BIT(14))
#define RTC_IO_PDAC2_SLP_SEL_S 14
#define RTC_IO_PDAC2_SLP_IE (BIT(13))
#define RTC_IO_PDAC2_SLP_IE_S 13
#define RTC_IO_PDAC2_SLP_OE (BIT(12))
#define RTC_IO_PDAC2_SLP_OE_S 12
#define RTC_IO_PDAC2_FUN_IE (BIT(11))
#define RTC_IO_PDAC2_FUN_IE_S 11
#define RTC_IO_PDAC2_DAC_XPD_FORCE (BIT(10))
#define RTC_IO_PDAC2_DAC_XPD_FORCE_S 10

#define XTAL_32K_PAD (DR_REG_RTCIO_BASE + 0x8c)
#define RTC_IO_X32N_DRV 0x00000003
#define RTC_IO_X32N_DRV_S 30
#define RTC_IO_X32N_HOLD (BIT(29))
#define RTC_IO_X32N_HOLD_S 29
#define RTC_IO_X32N_RDE (BIT(28))
#define RTC_IO_X32N_RDE_S 28
#define RTC_IO_X32N_RUE (BIT(27))
#define RTC_IO_X32N_RUE_S 27
#define RTC_IO_X32P_DRV 0x00000003
#define RTC_IO_X32P_DRV_S 25
#define RTC_IO_X32P_HOLD (BIT(24))
#define RTC_IO_X32P_HOLD_S 24
#define RTC_IO_X32P_RDE (BIT(23))
#define RTC_IO_X32P_RDE_S 23
#define RTC_IO_X32P_RUE (BIT(22))
#define RTC_IO_X32P_RUE_S 22
#define RTC_IO_DAC_XTAL_32K 0x00000003
#define RTC_IO_DAC_XTAL_32K_S 20
#define RTC_IO_XPD_XTAL_32K (BIT(19))
#define RTC_IO_XPD_XTAL_32K_S 19
#define RTC_IO_X32N_MUX_SEL (BIT(18))
#define RTC_IO_X32N_MUX_SEL_S 18
#define RTC_IO_X32P_MUX_SEL (BIT(17))
#define RTC_IO_X32P_MUX_SEL_S 17
#define RTC_IO_X32N_FUN_SEL 0x00000003
#define RTC_IO_X32N_FUN_SEL_S 15
#define RTC_IO_X32N_SLP_SEL (BIT(14))
#define RTC_IO_X32N_SLP_SEL_S 14
#define RTC_IO_X32N_SLP_IE (BIT(13))
#define RTC_IO_X32N_SLP_IE_S 13
#define RTC_IO_X32N_SLP_OE (BIT(12))
#define RTC_IO_X32N_SLP_OE_S 12
#define RTC_IO_X32N_FUN_IE (BIT(11))
#define RTC_IO_X32N_FUN_IE_S 11
#define RTC_IO_X32P_FUN_SEL 0x00000003
#define RTC_IO_X32P_FUN_SEL_S 9
#define RTC_IO_X32P_SLP_SEL (BIT(8))
#define RTC_IO_X32P_SLP_SEL_S 8
#define RTC_IO_X32P_SLP_IE (BIT(7))
#define RTC_IO_X32P_SLP_IE_S 7
#define RTC_IO_X32P_SLP_OE (BIT(6))
#define RTC_IO_X32P_SLP_OE_S 6
#define RTC_IO_X32P_FUN_IE (BIT(5))
#define RTC_IO_X32P_FUN_IE_S 5
#define RTC_IO_DRES_XTAL_32K 0x00000003
#define RTC_IO_DRES_XTAL_32K_S 3
#define RTC_IO_DBIAS_XTAL_32K 0x00000003
#define RTC_IO_DBIAS_XTAL_32K_S 1

#define TOUCH_CFG (DR_REG_RTCIO_BASE + 0x90)
#define RTC_IO_TOUCH_XPD_BIAS (BIT(31))
#define RTC_IO_TOUCH_XPD_BIAS_S 31
#define RTC_IO_TOUCH_DREFH 0x00000003
#define RTC_IO_TOUCH_DREFH_S 29
#define RTC_IO_TOUCH_DREFL 0x00000003
#define RTC_IO_TOUCH_DREFL_S 27
#define RTC_IO_TOUCH_DRANGE 0x00000003
#define RTC_IO_TOUCH_DRANGE_S 25
#define RTC_IO_TOUCH_DCUR 0x00000003
#define RTC_IO_TOUCH_DCUR_S 23

#define TOUCH_PAD0 (DR_REG_RTCIO_BASE + 0x94)
#define RTC_IO_TOUCH_PAD0_HOLD (BIT(31))
#define RTC_IO_TOUCH_PAD0_HOLD_S 31
#define RTC_IO_TOUCH_PAD0_DRV 0x00000003
#define RTC_IO_TOUCH_PAD0_DRV_S 29
#define RTC_IO_TOUCH_PAD0_RDE (BIT(28))
#define RTC_IO_TOUCH_PAD0_RDE_S 28
#define RTC_IO_TOUCH_PAD0_RUE (BIT(27))
#define RTC_IO_TOUCH_PAD0_RUE_S 27
#define RTC_IO_TOUCH_PAD0_DAC 0x00000007
#define RTC_IO_TOUCH_PAD0_DAC_S 23
#define RTC_IO_TOUCH_PAD0_START (BIT(22))
#define RTC_IO_TOUCH_PAD0_START_S 22
#define RTC_IO_TOUCH_PAD0_TIE_OPT (BIT(21))
#define RTC_IO_TOUCH_PAD0_TIE_OPT_S 21
#define RTC_IO_TOUCH_PAD0_XPD (BIT(20))
#define RTC_IO_TOUCH_PAD0_XPD_S 20
#define RTC_IO_TOUCH_PAD0_MUX_SEL (BIT(19))
#define RTC_IO_TOUCH_PAD0_MUX_SEL_S 19
#define RTC_IO_TOUCH_PAD0_FUN_SEL 0x00000003
#define RTC_IO_TOUCH_PAD0_FUN_SEL_S 17
#define RTC_IO_TOUCH_PAD0_SLP_SEL (BIT(16))
#define RTC_IO_TOUCH_PAD0_SLP_SEL_S 16
#define RTC_IO_TOUCH_PAD0_SLP_IE (BIT(15))
#define RTC_IO_TOUCH_PAD0_SLP_IE_S 15
#define RTC_IO_TOUCH_PAD0_SLP_OE (BIT(14))
#define RTC_IO_TOUCH_PAD0_SLP_OE_S 14
#define RTC_IO_TOUCH_PAD0_FUN_IE (BIT(13))
#define RTC_IO_TOUCH_PAD0_FUN_IE_S 13
#define RTC_IO_TOUCH_PAD0_TO_GPIO (BIT(12))
#define RTC_IO_TOUCH_PAD0_TO_GPIO_S 12

#define TOUCH_PAD1 (DR_REG_RTCIO_BASE + 0x98)
#define RTC_IO_TOUCH_PAD1_HOLD (BIT(31))
#define RTC_IO_TOUCH_PAD1_HOLD_S 31
#define RTC_IO_TOUCH_PAD1_DRV 0x00000003
#define RTC_IO_TOUCH_PAD1_DRV_S 29
#define RTC_IO_TOUCH_PAD1_RDE (BIT(28))
#define RTC_IO_TOUCH_PAD1_RDE_S 28
#define RTC_IO_TOUCH_PAD1_RUE (BIT(27))
#define RTC_IO_TOUCH_PAD1_RUE_S 27
#define RTC_IO_TOUCH_PAD1_DAC 0x00000007
#define RTC_IO_TOUCH_PAD1_DAC_S 23
#define RTC_IO_TOUCH_PAD1_START (BIT(22))
#define RTC_IO_TOUCH_PAD1_START_S 22
#define RTC_IO_TOUCH_PAD1_TIE_OPT (BIT(21))
#define RTC_IO_TOUCH_PAD1_TIE_OPT_S 21
#define RTC_IO_TOUCH_PAD1_XPD (BIT(20))
#define RTC_IO_TOUCH_PAD1_XPD_S 20
#define RTC_IO_TOUCH_PAD1_MUX_SEL (BIT(19))
#define RTC_IO_TOUCH_PAD1_MUX_SEL_S 19
#define RTC_IO_TOUCH_PAD1_FUN_SEL 0x00000003
#define RTC_IO_TOUCH_PAD1_FUN_SEL_S 17
#define RTC_IO_TOUCH_PAD1_SLP_SEL (BIT(16))
#define RTC_IO_TOUCH_PAD1_SLP_SEL_S 16
#define RTC_IO_TOUCH_PAD1_SLP_IE (BIT(15))
#define RTC_IO_TOUCH_PAD1_SLP_IE_S 15
#define RTC_IO_TOUCH_PAD1_SLP_OE (BIT(14))
#define RTC_IO_TOUCH_PAD1_SLP_OE_S 14
#define RTC_IO_TOUCH_PAD1_FUN_IE (BIT(13))
#define RTC_IO_TOUCH_PAD1_FUN_IE_S 13
#define RTC_IO_TOUCH_PAD1_TO_GPIO (BIT(12))
#define RTC_IO_TOUCH_PAD1_TO_GPIO_S 12

#define TOUCH_PAD2 (DR_REG_RTCIO_BASE + 0x9c)
#define RTC_IO_TOUCH_PAD2_HOLD (BIT(31))
#define RTC_IO_TOUCH_PAD2_HOLD_S 31
#define RTC_IO_TOUCH_PAD2_DRV 0x00000003
#define RTC_IO_TOUCH_PAD2_DRV_S 29
#define RTC_IO_TOUCH_PAD2_RDE (BIT(28))
#define RTC_IO_TOUCH_PAD2_RDE_S 28
#define RTC_IO_TOUCH_PAD2_RUE (BIT(27))
#define RTC_IO_TOUCH_PAD2_RUE_S 27
#define RTC_IO_TOUCH_PAD2_DAC 0x00000007
#define RTC_IO_TOUCH_PAD2_DAC_S 23
#define RTC_IO_TOUCH_PAD2_START (BIT(22))
#define RTC_IO_TOUCH_PAD2_START_S 22
#define RTC_IO_TOUCH_PAD2_TIE_OPT (BIT(21))
#define RTC_IO_TOUCH_PAD2_TIE_OPT_S 21
#define RTC_IO_TOUCH_PAD2_XPD (BIT(20))
#define RTC_IO_TOUCH_PAD2_XPD_S 20
#define RTC_IO_TOUCH_PAD2_MUX_SEL (BIT(19))
#define RTC_IO_TOUCH_PAD2_MUX_SEL_S 19
#define RTC_IO_TOUCH_PAD2_FUN_SEL 0x00000003
#define RTC_IO_TOUCH_PAD2_FUN_SEL_S 17
#define RTC_IO_TOUCH_PAD2_SLP_SEL (BIT(16))
#define RTC_IO_TOUCH_PAD2_SLP_SEL_S 16
#define RTC_IO_TOUCH_PAD2_SLP_IE (BIT(15))
#define RTC_IO_TOUCH_PAD2_SLP_IE_S 15
#define RTC_IO_TOUCH_PAD2_SLP_OE (BIT(14))
#define RTC_IO_TOUCH_PAD2_SLP_OE_S 14
#define RTC_IO_TOUCH_PAD2_FUN_IE (BIT(13))
#define RTC_IO_TOUCH_PAD2_FUN_IE_S 13
#define RTC_IO_TOUCH_PAD2_TO_GPIO (BIT(12))
#define RTC_IO_TOUCH_PAD2_TO_GPIO_S 12

#define TOUCH_PAD3 (DR_REG_RTCIO_BASE + 0xa0)
#define RTC_IO_TOUCH_PAD3_HOLD (BIT(31))
#define RTC_IO_TOUCH_PAD3_HOLD_S 31
#define RTC_IO_TOUCH_PAD3_DRV 0x00000003
#define RTC_IO_TOUCH_PAD3_DRV_S 29
#define RTC_IO_TOUCH_PAD3_RDE (BIT(28))
#define RTC_IO_TOUCH_PAD3_RDE_S 28
#define RTC_IO_TOUCH_PAD3_RUE (BIT(27))
#define RTC_IO_TOUCH_PAD3_RUE_S 27
#define RTC_IO_TOUCH_PAD3_DAC 0x00000007
#define RTC_IO_TOUCH_PAD3_DAC_S 23
#define RTC_IO_TOUCH_PAD3_START (BIT(22))
#define RTC_IO_TOUCH_PAD3_START_S 22
#define RTC_IO_TOUCH_PAD3_TIE_OPT (BIT(21))
#define RTC_IO_TOUCH_PAD3_TIE_OPT_S 21
#define RTC_IO_TOUCH_PAD3_XPD (BIT(20))
#define RTC_IO_TOUCH_PAD3_XPD_S 20
#define RTC_IO_TOUCH_PAD3_MUX_SEL (BIT(19))
#define RTC_IO_TOUCH_PAD3_MUX_SEL_S 19
#define RTC_IO_TOUCH_PAD3_FUN_SEL 0x00000003
#define RTC_IO_TOUCH_PAD3_FUN_SEL_S 17
#define RTC_IO_TOUCH_PAD3_SLP_SEL (BIT(16))
#define RTC_IO_TOUCH_PAD3_SLP_SEL_S 16
#define RTC_IO_TOUCH_PAD3_SLP_IE (BIT(15))
#define RTC_IO_TOUCH_PAD3_SLP_IE_S 15
#define RTC_IO_TOUCH_PAD3_SLP_OE (BIT(14))
#define RTC_IO_TOUCH_PAD3_SLP_OE_S 14
#define RTC_IO_TOUCH_PAD3_FUN_IE (BIT(13))
#define RTC_IO_TOUCH_PAD3_FUN_IE_S 13
#define RTC_IO_TOUCH_PAD3_TO_GPIO (BIT(12))
#define RTC_IO_TOUCH_PAD3_TO_GPIO_S 12

#define TOUCH_PAD4 (DR_REG_RTCIO_BASE + 0xa4)
#define RTC_IO_TOUCH_PAD4_HOLD (BIT(31))
#define RTC_IO_TOUCH_PAD4_HOLD_S 31
#define RTC_IO_TOUCH_PAD4_DRV 0x00000003
#define RTC_IO_TOUCH_PAD4_DRV_S 29
#define RTC_IO_TOUCH_PAD4_RDE (BIT(28))
#define RTC_IO_TOUCH_PAD4_RDE_S 28
#define RTC_IO_TOUCH_PAD4_RUE (BIT(27))
#define RTC_IO_TOUCH_PAD4_RUE_S 27
#define RTC_IO_TOUCH_PAD4_DAC 0x00000007
#define RTC_IO_TOUCH_PAD4_DAC_S 23
#define RTC_IO_TOUCH_PAD4_START (BIT(22))
#define RTC_IO_TOUCH_PAD4_START_S 22
#define RTC_IO_TOUCH_PAD4_TIE_OPT (BIT(21))
#define RTC_IO_TOUCH_PAD4_TIE_OPT_S 21
#define RTC_IO_TOUCH_PAD4_XPD (BIT(20))
#define RTC_IO_TOUCH_PAD4_XPD_S 20
#define RTC_IO_TOUCH_PAD4_MUX_SEL (BIT(19))
#define RTC_IO_TOUCH_PAD4_MUX_SEL_S 19
#define RTC_IO_TOUCH_PAD4_FUN_SEL 0x00000003
#define RTC_IO_TOUCH_PAD4_FUN_SEL_S 17
#define RTC_IO_TOUCH_PAD4_SLP_SEL (BIT(16))
#define RTC_IO_TOUCH_PAD4_SLP_SEL_S 16
#define RTC_IO_TOUCH_PAD4_SLP_IE (BIT(15))
#define RTC_IO_TOUCH_PAD4_SLP_IE_S 15
#define RTC_IO_TOUCH_PAD4_SLP_OE (BIT(14))
#define RTC_IO_TOUCH_PAD4_SLP_OE_S 14
#define RTC_IO_TOUCH_PAD4_FUN_IE (BIT(13))
#define RTC_IO_TOUCH_PAD4_FUN_IE_S 13
#define RTC_IO_TOUCH_PAD4_TO_GPIO (BIT(12))
#define RTC_IO_TOUCH_PAD4_TO_GPIO_S 12

#define TOUCH_PAD5 (DR_REG_RTCIO_BASE + 0xa8)
#define RTC_IO_TOUCH_PAD5_HOLD (BIT(31))
#define RTC_IO_TOUCH_PAD5_HOLD_S 31
#define RTC_IO_TOUCH_PAD5_DRV 0x00000003
#define RTC_IO_TOUCH_PAD5_DRV_S 29
#define RTC_IO_TOUCH_PAD5_RDE (BIT(28))
#define RTC_IO_TOUCH_PAD5_RDE_S 28
#define RTC_IO_TOUCH_PAD5_RUE (BIT(27))
#define RTC_IO_TOUCH_PAD5_RUE_S 27
#define RTC_IO_TOUCH_PAD5_DAC 0x00000007
#define RTC_IO_TOUCH_PAD5_DAC_S 23
#define RTC_IO_TOUCH_PAD5_START (BIT(22))
#define RTC_IO_TOUCH_PAD5_START_S 22
#define RTC_IO_TOUCH_PAD5_TIE_OPT (BIT(21))
#define RTC_IO_TOUCH_PAD5_TIE_OPT_S 21
#define RTC_IO_TOUCH_PAD5_XPD (BIT(20))
#define RTC_IO_TOUCH_PAD5_XPD_S 20
#define RTC_IO_TOUCH_PAD5_MUX_SEL (BIT(19))
#define RTC_IO_TOUCH_PAD5_MUX_SEL_S 19
#define RTC_IO_TOUCH_PAD5_FUN_SEL 0x00000003
#define RTC_IO_TOUCH_PAD5_FUN_SEL_S 17
#define RTC_IO_TOUCH_PAD5_SLP_SEL (BIT(16))
#define RTC_IO_TOUCH_PAD5_SLP_SEL_S 16
#define RTC_IO_TOUCH_PAD5_SLP_IE (BIT(15))
#define RTC_IO_TOUCH_PAD5_SLP_IE_S 15
#define RTC_IO_TOUCH_PAD5_SLP_OE (BIT(14))
#define RTC_IO_TOUCH_PAD5_SLP_OE_S 14
#define RTC_IO_TOUCH_PAD5_FUN_IE (BIT(13))
#define RTC_IO_TOUCH_PAD5_FUN_IE_S 13
#define RTC_IO_TOUCH_PAD5_TO_GPIO (BIT(12))
#define RTC_IO_TOUCH_PAD5_TO_GPIO_S 12

#define TOUCH_PAD6 (DR_REG_RTCIO_BASE + 0xac)
#define RTC_IO_TOUCH_PAD6_HOLD (BIT(31))
#define RTC_IO_TOUCH_PAD6_HOLD_S 31
#define RTC_IO_TOUCH_PAD6_DRV 0x00000003
#define RTC_IO_TOUCH_PAD6_DRV_S 29
#define RTC_IO_TOUCH_PAD6_RDE (BIT(28))
#define RTC_IO_TOUCH_PAD6_RDE_S 28
#define RTC_IO_TOUCH_PAD6_RUE (BIT(27))
#define RTC_IO_TOUCH_PAD6_RUE_S 27
#define RTC_IO_TOUCH_PAD6_DAC 0x00000007
#define RTC_IO_TOUCH_PAD6_DAC_S 23
#define RTC_IO_TOUCH_PAD6_START (BIT(22))
#define RTC_IO_TOUCH_PAD6_START_S 22
#define RTC_IO_TOUCH_PAD6_TIE_OPT (BIT(21))
#define RTC_IO_TOUCH_PAD6_TIE_OPT_S 21
#define RTC_IO_TOUCH_PAD6_XPD (BIT(20))
#define RTC_IO_TOUCH_PAD6_XPD_S 20
#define RTC_IO_TOUCH_PAD6_MUX_SEL (BIT(19))
#define RTC_IO_TOUCH_PAD6_MUX_SEL_S 19
#define RTC_IO_TOUCH_PAD6_FUN_SEL 0x00000003
#define RTC_IO_TOUCH_PAD6_FUN_SEL_S 17
#define RTC_IO_TOUCH_PAD6_SLP_SEL (BIT(16))
#define RTC_IO_TOUCH_PAD6_SLP_SEL_S 16
#define RTC_IO_TOUCH_PAD6_SLP_IE (BIT(15))
#define RTC_IO_TOUCH_PAD6_SLP_IE_S 15
#define RTC_IO_TOUCH_PAD6_SLP_OE (BIT(14))
#define RTC_IO_TOUCH_PAD6_SLP_OE_S 14
#define RTC_IO_TOUCH_PAD6_FUN_IE (BIT(13))
#define RTC_IO_TOUCH_PAD6_FUN_IE_S 13
#define RTC_IO_TOUCH_PAD6_TO_GPIO (BIT(12))
#define RTC_IO_TOUCH_PAD6_TO_GPIO_S 12

#define TOUCH_PAD7 (DR_REG_RTCIO_BASE + 0xb0)
#define RTC_IO_TOUCH_PAD7_HOLD (BIT(31))
#define RTC_IO_TOUCH_PAD7_HOLD_S 31
#define RTC_IO_TOUCH_PAD7_DRV 0x00000003
#define RTC_IO_TOUCH_PAD7_DRV_S 29
#define RTC_IO_TOUCH_PAD7_RDE (BIT(28))
#define RTC_IO_TOUCH_PAD7_RDE_S 28
#define RTC_IO_TOUCH_PAD7_RUE (BIT(27))
#define RTC_IO_TOUCH_PAD7_RUE_S 27
#define RTC_IO_TOUCH_PAD7_DAC 0x00000007
#define RTC_IO_TOUCH_PAD7_DAC_S 23
#define RTC_IO_TOUCH_PAD7_START (BIT(22))
#define RTC_IO_TOUCH_PAD7_START_S 22
#define RTC_IO_TOUCH_PAD7_TIE_OPT (BIT(21))
#define RTC_IO_TOUCH_PAD7_TIE_OPT_S 21
#define RTC_IO_TOUCH_PAD7_XPD (BIT(20))
#define RTC_IO_TOUCH_PAD7_XPD_S 20
#define RTC_IO_TOUCH_PAD7_MUX_SEL (BIT(19))
#define RTC_IO_TOUCH_PAD7_MUX_SEL_S 19
#define RTC_IO_TOUCH_PAD7_FUN_SEL 0x00000003
#define RTC_IO_TOUCH_PAD7_FUN_SEL_S 17
#define RTC_IO_TOUCH_PAD7_SLP_SEL (BIT(16))
#define RTC_IO_TOUCH_PAD7_SLP_SEL_S 16
#define RTC_IO_TOUCH_PAD7_SLP_IE (BIT(15))
#define RTC_IO_TOUCH_PAD7_SLP_IE_S 15
#define RTC_IO_TOUCH_PAD7_SLP_OE (BIT(14))
#define RTC_IO_TOUCH_PAD7_SLP_OE_S 14
#define RTC_IO_TOUCH_PAD7_FUN_IE (BIT(13))
#define RTC_IO_TOUCH_PAD7_FUN_IE_S 13
#define RTC_IO_TOUCH_PAD7_TO_GPIO (BIT(12))
#define RTC_IO_TOUCH_PAD7_TO_GPIO_S 12

#define TOUCH_PAD8 (DR_REG_RTCIO_BASE + 0xb4)
#define RTC_IO_TOUCH_PAD8_DAC 0x00000007
#define RTC_IO_TOUCH_PAD8_DAC_S 23
#define RTC_IO_TOUCH_PAD8_START (BIT(22))
#define RTC_IO_TOUCH_PAD8_START_S 22
#define RTC_IO_TOUCH_PAD8_TIE_OPT (BIT(21))
#define RTC_IO_TOUCH_PAD8_TIE_OPT_S 21
#define RTC_IO_TOUCH_PAD8_XPD (BIT(20))
#define RTC_IO_TOUCH_PAD8_XPD_S 20
#define RTC_IO_TOUCH_PAD8_TO_GPIO (BIT(19))
#define RTC_IO_TOUCH_PAD8_TO_GPIO_S 19

#define TOUCH_PAD9 (DR_REG_RTCIO_BASE + 0xb8)
#define RTC_IO_TOUCH_PAD9_DAC 0x00000007
#define RTC_IO_TOUCH_PAD9_DAC_S 23
#define RTC_IO_TOUCH_PAD9_START (BIT(22))
#define RTC_IO_TOUCH_PAD9_START_S 22
#define RTC_IO_TOUCH_PAD9_TIE_OPT (BIT(21))
#define RTC_IO_TOUCH_PAD9_TIE_OPT_S 21
#define RTC_IO_TOUCH_PAD9_XPD (BIT(20))
#define RTC_IO_TOUCH_PAD9_XPD_S 20
#define RTC_IO_TOUCH_PAD9_TO_GPIO (BIT(19))
#define RTC_IO_TOUCH_PAD9_TO_GPIO_S 19

#define EXT_WAKEUP0 (DR_REG_RTCIO_BASE + 0xbc)
#define RTC_IO_EXT_WAKEUP0_SEL 0x0000001F
#define RTC_IO_EXT_WAKEUP0_SEL_S 27

#define XTL_EXT_CTR (DR_REG_RTCIO_BASE + 0xc0)
#define RTC_IO_XTL_EXT_CTR_SEL 0x0000001F
#define RTC_IO_XTL_EXT_CTR_SEL_S 27

#define SAR_I2C_IO (DR_REG_RTCIO_BASE + 0xc4)
#define RTC_IO_SAR_I2C_SDA_SEL 0x00000003
#define RTC_IO_SAR_I2C_SDA_SEL_S 30
#define RTC_IO_SAR_I2C_SCL_SEL 0x00000003
#define RTC_IO_SAR_I2C_SCL_SEL_S 28
#define RTC_IO_SAR_DEBUG_BIT_SEL 0x0000001F
#define RTC_IO_SAR_DEBUG_BIT_SEL_S 23

#define RTC_IO_DATE (DR_REG_RTCIO_BASE + 0xc8)
#define RTC_IO_RTC_IO_DATE 0x0FFFFFFF
#define RTC_IO_RTC_IO_DATE_S 0
#define RTC_IO_RTC_IO_DATE_VERSION 0x1703160

#endif /* _SOC_RTC_IO_REG_H_ */

