#define F_CPU 8000000
#include <util/delay.h>
#include "STDTYPES.h"
#include "Registers.h"
#include "KeyPAd_interface.h"
#include "LCD_interface.h"
#include "DIO_Interface.h"
#include "ADC_Interface.h"
#include "Sensor_interface.h"
#include "FireSystem_Interface.h"
#include "Utils.h"



int main(void)
{
	DIO_Init();
	LCD_init();
	keypad_init();
	ADC_init(AVCC,ADC_PRE_64);//125KHZ Clock
	
	while (1)
	{
	FireSystem_status();	
	}
}

