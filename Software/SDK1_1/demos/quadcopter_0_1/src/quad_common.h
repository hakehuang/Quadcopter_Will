/*
 * Copyright (c) 2013 - 2014, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of Freescale Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __QUAD_COMMON_H__
#define __QUAD_COMMON_H__

#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

#include "fsl_clock_manager.h"
#include "fsl_os_abstraction.h"
#include "fsl_i2c_hal.h"

#include "fsl_device_registers.h"
#include "fsl_i2c_master_driver.h"
#include "fsl_i2c_slave_driver.h"
#include "fsl_i2c_shared_function.h"

#include "board.h"
#include "fsl_debug_console.h"


#define I2C_WRITE 0U
#define I2C_READ 1U

typedef enum _full_scale_range
{
  kRange2g   = 0U,
  kRange4g   = 1U,
  kRange8g   = 2U
} full_scale_range_t;

#define RANGE_MASK     0x03U

typedef enum _i2c_mode
{
  kInterruptMode = 0U,
  kPollingMode = 1U
} i2c_mode_t;

int16_t acceDataCombine(uint8_t msb, uint8_t lsb);
i2c_status_t I2C_acceInterrupt(void);
i2c_status_t I2C_acceInit(void);
#endif
/*******************************************************************************
* EOF
*******************************************************************************/