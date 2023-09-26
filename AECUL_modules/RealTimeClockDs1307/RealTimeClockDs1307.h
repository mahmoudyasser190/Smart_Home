/* 
 * File:   RealTimeClockDs1307.h
 * Author: Body
 *
 * Created on September 26, 2023, 12:29 PM
 */

#ifndef REALTIMECLOCKDS1307_H
#define	REALTIMECLOCKDS1307_H

#include "../../mcc_generated_files/mcc.h"
#include "../../mcc_generated_files/examples/i2c_master_example.h"
#include "../../mcc_generated_files/eusart.h"
#include "../UART_LOGGINGDEBUG/UART_LOGGING_DEBUG.h"

typedef struct
{
    uint8_t hours;
    uint8_t minutes;
    uint8_t seconds;
    uint8_t year;
    uint8_t month;
    uint8_t day;
}RealTimeClockDs1307_t;

RealTimeClockDs1307_t RealTimeClockDs1307_get_data_time(void);
void print_RealTimeClockDs1307(void);

#endif	/* REALTIMECLOCKDS1307_H */

