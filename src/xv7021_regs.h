/**************************************************************************/
/*!
    @file     xv7021_regs.h

    Epson XV7021 specific register definitions

    @section  HISTORY

    v1.0 - First release

    @section LICENSE

    Software License Agreement (BSD License, see license.txt)

    Copyright (c) 2026 Seiko Epson Corporation.
    All rights reserved.

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions are met:

    1. Redistributions of source code must retain the above copyright notice,
       this list of conditions and the following disclaimer.

    2. Redistributions in binary form must reproduce the above copyright notice,
       this list of conditions and the following disclaimer in the documentation
       and/or other materials provided with the distribution.

    3. Neither the name of the copyright holder nor the names of its
   contributors may be used to endorse or promote products derived from this
   software without specific prior written permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
    AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
    THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
    PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
    CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
    EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
    PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
    OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
    OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
    ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
/**************************************************************************/

#pragma once

#include <stdbool.h>
#include <stdint.h>

// Gyro SPI
namespace XV7021_NS {

// Register Addresses
constexpr uint8_t ADDR_DSP_CTRL1 = 0x01;
constexpr uint8_t ADDR_DSP_CTRL2 = 0x02;
constexpr uint8_t ADDR_DSP_CTRL3 = 0x03;
constexpr uint8_t ADDR_STS_RD = 0x04;
constexpr uint8_t ADDR_SLP_IN = 0x05;
constexpr uint8_t ADDR_SLP_OUT = 0x06;
constexpr uint8_t ADDR_STDBY = 0x07;
constexpr uint8_t ADDR_TEMP_RD = 0x08;
constexpr uint8_t ADDR_SOFT_RESET = 0x09;
constexpr uint8_t ADDR_DAT_ACC_ON = 0x0A;
constexpr uint8_t ADDR_OUT_CTRL1 = 0x0B;
constexpr uint8_t ADDR_AUTO_C = 0x0C;
constexpr uint8_t ADDR_TS_DATA_FORMAT = 0x1C;

// DSP_CTRL1
constexpr uint8_t CMD_HPFC_HZ_0_01 = 0x00;
constexpr uint8_t CMD_HPFC_HZ_0_03 = 0x01;
constexpr uint8_t CMD_HPFC_HZ_0_10 = 0x02;
constexpr uint8_t CMD_HPFC_HZ_0_30 = 0x03;
constexpr uint8_t CMD_HPFC_HZ_1 = 0x04;
constexpr uint8_t CMD_HPFC_HZ_3 = 0x05;
constexpr uint8_t CMD_HPFC_HZ_10 = 0x06;

constexpr uint8_t CMD_HPF_DISABLE = 0x00;
constexpr uint8_t CMD_HPF_ENABLE = 0x01;

// DSP_CTRL2
constexpr uint8_t CMD_NF_DISABLE = 0x00;
constexpr uint8_t CMD_NF_ENABLE = 0x01;

constexpr uint8_t CMD_LPF_ORDER_2ND = 0x00;
constexpr uint8_t CMD_LPF_ORDER_3RD = 0x01;
constexpr uint8_t CMD_LPF_ORDER_4TH = 0x02;

constexpr uint8_t CMD_LPFC_HZ_010 = 0x00;
constexpr uint8_t CMD_LPFC_HZ_035 = 0x01;
constexpr uint8_t CMD_LPFC_HZ_045 = 0x02;
constexpr uint8_t CMD_LPFC_HZ_050 = 0x03;
constexpr uint8_t CMD_LPFC_HZ_070 = 0x04;
constexpr uint8_t CMD_LPFC_HZ_085 = 0x05;
constexpr uint8_t CMD_LPFC_HZ_100 = 0x06;
constexpr uint8_t CMD_LPFC_HZ_140 = 0x07;
constexpr uint8_t CMD_LPFC_HZ_175 = 0x08;
constexpr uint8_t CMD_LPFC_HZ_200 = 0x09;
constexpr uint8_t CMD_LPFC_HZ_285 = 0x0A;
constexpr uint8_t CMD_LPFC_HZ_345 = 0x0B;
constexpr uint8_t CMD_LPFC_HZ_400 = 0x0C;
constexpr uint8_t CMD_LPFC_HZ_500 = 0x0D;

// DSP_CTRL3
constexpr uint8_t CMD_CALIB_DISABLE = 0x00;
constexpr uint8_t CMD_CALIB_ENABLE = 0x01;

constexpr uint8_t CMD_SEL_FS = 0x00;
constexpr uint8_t CMD_SEL_FS_DIV2 = 0x01;
constexpr uint8_t CMD_SEL_FS_DIV4 = 0x02;
constexpr uint8_t CMD_SEL_FS_DIV8 = 0x03;
constexpr uint8_t CMD_SEL_FS_DIV16 = 0x04;
constexpr uint8_t CMD_SEL_FS_DIV32 = 0x05;
constexpr uint8_t CMD_SEL_FS_DIV64 = 0x06;
constexpr uint8_t CMD_SEL_FS_DIV128 = 0x07;

// STATUS_RD
constexpr uint8_t CMD_SLP_OUT = 0x00;
constexpr uint8_t CMD_SLP_IN = 0x01;
constexpr uint8_t CMD_SLP_CTRL_ENB = 0x59;

// OUT_CTRL1
constexpr uint8_t CMD_DATA_FORMAT_16B = 0x00;
constexpr uint8_t CMD_DATA_FORMAT_24B = 0x01;

// TS_DATA_FORMAT
constexpr uint8_t CMD_TS_FORMAT_8B = 0x00;
constexpr uint8_t CMD_TS_FORMAT_10B = 0x01;
constexpr uint8_t CMD_TS_FORMAT_12B = 0x02;

}  // namespace XV7021_NS