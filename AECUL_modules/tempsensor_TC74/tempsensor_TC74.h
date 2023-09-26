/* 
 * File:   tempsensor_TC74.h
 * Author: Body
 *
 * Created on September 26, 2023, 8:54 PM
 */

#ifndef TEMPSENSOR_TC74_H
#define	TEMPSENSOR_TC74_H

#include "../../mcc_generated_files/mcc.h"
#include "../../mcc_generated_files/examples/i2c_master_example.h"

uint8_t tempsensor_TC74_get_temp(i2c_address_t TC74_add);

 

#endif	/* TEMPSENSOR_TC74_H */

