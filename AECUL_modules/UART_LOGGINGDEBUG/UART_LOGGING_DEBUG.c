#include "UART_LOGGING_DEBUG.h"

void UART_LOGGING_DEBUG_send_string(uint8_t *str , uint16_t len)
{
    uint16_t counter=0;
    for(counter=0;counter<len;counter++)
    {
        EUSART_Write(*str++);
    }
}
