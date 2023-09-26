
#include "tempsensor_TC74.h"
 
uint8_t tempsensor_TC74_get_temp(i2c_address_t TC74_add)
{
    uint8_t TC74_tempval=0;
    TC74_tempval=I2C_Read1ByteRegister(TC74_add,0x00);
    return TC74_tempval;
}

