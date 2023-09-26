/* 
 * File:   UART_LOGGING_DEBUG.h
 * Author: Body
 *
 * Created on September 26, 2023, 3:40 PM
 */

#ifndef UART_LOGGING_DEBUG_H
#define	UART_LOGGING_DEBUG_H

#include "../../mcc_generated_files/eusart.h"

void UART_LOGGING_DEBUG_send_string(uint8_t *str , uint16_t len);

#endif	/* UART_LOGGING_DEBUG_H */

