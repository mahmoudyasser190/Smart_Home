
#include "eeprom_24c02c.h"

void eeprom_24c02c_write_byte(i2c_address_t eeprom_add, i2c_address_t byte_add, uint8_t data)
{
    I2C_Write1ByteRegister(eeprom_add,byte_add,data);
}
uint8_t eeprom_24c02c_read_byte(i2c_address_t eeprom_add, i2c_address_t byte_add)
{
    uint8_t ret_val=0;
   ret_val= I2C_Read1ByteRegister(eeprom_add,byte_add);
   return ret_val;
}
