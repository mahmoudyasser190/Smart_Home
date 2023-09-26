
#include "mcc_generated_files/mcc.h"

uint8_t rec_a7_temp=0;

static void custom_I2C_SlaveDefRdInterruptHandler() {
    rec_a7_temp = SSPBUF;
}

void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();

    

    // Enable high priority global interrupts
    INTERRUPT_GlobalInterruptHighEnable();

    // Enable low priority global interrupts.
   INTERRUPT_GlobalInterruptLowEnable();

    // Disable high priority global interrupts
    //INTERRUPT_GlobalInterruptHighDisable();

    // Disable low priority global interrupts.
    //INTERRUPT_GlobalInterruptLowDisable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    I2C_Open();
    I2C_SlaveSetReadIntHandler(custom_I2C_SlaveDefRdInterruptHandler);
    while (1)
    {
        if(rec_a7_temp>35)
        {
            dc_motor0_SetHigh();
            dc_motor1_SetLow();
        }
        else
        {
            dc_motor0_SetLow();
            dc_motor1_SetLow();
        }
    }
}
/**
 End of File
*/