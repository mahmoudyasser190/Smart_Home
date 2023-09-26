/* 
 * File:   eeprom_24c02c.h
 * Author: Body
 *
 * Created on September 26, 2023, 6:44 PM
 */

#ifndef EEPROM_24C02C_H
#define	EEPROM_24C02C_H

#include "../../mcc_generated_files/mcc.h"
#include "../../mcc_generated_files/examples/i2c_master_example.h"

void eeprom_24c02c_write_byte(i2c_address_t eeprom_add, i2c_address_t byte_add, uint8_t data);
uint8_t eeprom_24c02c_read_byte(i2c_address_t eeprom_add, i2c_address_t byte_add);

#endif	/* EEPROM_24C02C_H */

