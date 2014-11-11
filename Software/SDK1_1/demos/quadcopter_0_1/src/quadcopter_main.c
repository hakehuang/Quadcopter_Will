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

///////////////////////////////////////////////////////////////////////////////
//  Includes
///////////////////////////////////////////////////////////////////////////////


#include "quad_common.h"
#include "quad_i2c_config.h"

////////////////////////////////////////////////////////////////////////////////
// Code
////////////////////////////////////////////////////////////////////////////////

/*!
 * @brief Main function
 */
int main (void)
{
    // RX buffers
    //! @param receiveBuff Buffer used to hold received data
    uint8_t receiveBuff;

    // Initialize standard SDK demo application pins
    hardware_init();
    OSA_Init();

    // Call this function to initialize the console UART. This function
    // enables the use of STDIO functions (printf, scanf, etc.)
    dbg_uart_init();

    // Print the initial banner
    PRINTF("\r\nHello World!\n\n\r");

    LED2_EN;    LED3_EN;    LED4_EN;    LED5_EN;
    LED2_OFF;   LED3_OFF;   LED4_OFF;   LED5_OFF;


    I2C_acceInit();
    while(1)
    {
      LED2_ON;
      OSA_TimeDelay(200);
      LED3_ON;
      OSA_TimeDelay(200);
      LED4_ON;
      OSA_TimeDelay(200);
      LED5_ON;
      OSA_TimeDelay(200);

      LED2_OFF;
      OSA_TimeDelay(200);
      LED3_OFF;
      OSA_TimeDelay(200);
      LED4_OFF;
      OSA_TimeDelay(200);
      LED5_OFF;
      OSA_TimeDelay(200);

      I2C_acceInterrupt();
    }
}