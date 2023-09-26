
#include "RealTimeClockDs1307.h"
static RealTimeClockDs1307_t RealTimeClockDs1307;
uint8_t RealTimeClockDs1307_pack[18];

RealTimeClockDs1307_t RealTimeClockDs1307_get_data_time(void)
{
   RealTimeClockDs1307.seconds= I2C_Read1ByteRegister(0xD0,0x00);
   RealTimeClockDs1307.minutes= I2C_Read1ByteRegister(0xD0,0x01);
   RealTimeClockDs1307.hours= I2C_Read1ByteRegister(0xD0,0x02);
   RealTimeClockDs1307.day= I2C_Read1ByteRegister(0xD0,0x04);
   RealTimeClockDs1307.month= I2C_Read1ByteRegister(0xD0,0x05);
   RealTimeClockDs1307.year= I2C_Read1ByteRegister(0xD0,0x06);
   return RealTimeClockDs1307;
}
void print_RealTimeClockDs1307(void)
{
    RealTimeClockDs1307_pack[0]=((RealTimeClockDs1307.day>>4)+0x30);
    RealTimeClockDs1307_pack[1]=((RealTimeClockDs1307.day&0x0F)+0x30);
    RealTimeClockDs1307_pack[2]=':';
    RealTimeClockDs1307_pack[3]=((RealTimeClockDs1307.month>>4)+0x30);
    RealTimeClockDs1307_pack[4]=((RealTimeClockDs1307.month&0x0F)+0x30);
    RealTimeClockDs1307_pack[5]=':';
    RealTimeClockDs1307_pack[6]=((RealTimeClockDs1307.year>>4)+0x30);
    RealTimeClockDs1307_pack[7]=((RealTimeClockDs1307.year&0x0F)+0x30);
    
     RealTimeClockDs1307_pack[8]='/';
    
    RealTimeClockDs1307_pack[9]=((RealTimeClockDs1307.hours>>4)+0x30);
    RealTimeClockDs1307_pack[10]=((RealTimeClockDs1307.hours&0x0F)+0x30);
    RealTimeClockDs1307_pack[11]=':';
    RealTimeClockDs1307_pack[12]=((RealTimeClockDs1307.minutes>>4)+0x30);
    RealTimeClockDs1307_pack[13]=((RealTimeClockDs1307.minutes&0x0F)+0x30);
    RealTimeClockDs1307_pack[14]=':';
    RealTimeClockDs1307_pack[15]=((RealTimeClockDs1307.seconds>>4)+0x30);
    RealTimeClockDs1307_pack[16]=((RealTimeClockDs1307.seconds&0x0F)+0x30);
    RealTimeClockDs1307_pack[17]='\r';
    
  
    UART_LOGGING_DEBUG_send_string("date :",8);
    UART_LOGGING_DEBUG_send_string(RealTimeClockDs1307_pack,18);
   
}