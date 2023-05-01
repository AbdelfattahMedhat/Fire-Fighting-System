
#ifndef REGISTERS_H_
#define REGISTERS_H_
/**********************************DIO****************************/
#define PORTA (*(volatile unsigned char*)0x3B)
#define DDRA (*(volatile unsigned char*)0x3A)
#define PINA (*(volatile unsigned char*)0x39)
#define PORTB (*(volatile unsigned char*)0x38)
#define DDRB (*(volatile unsigned char*)0x37)
#define PINB (*(volatile unsigned char*)0x36)
#define PORTC (*(volatile unsigned char*)0x35)
#define DDRC (*(volatile unsigned char*)0x34)
#define PINC (*(volatile unsigned char*)0x33)
#define PORTD (*(volatile unsigned char*)0x32)
#define DDRD (*(volatile unsigned char*)0x31)
#define PIND (*(volatile unsigned char*)0x30)
/**********************************ADC****************************/
#define ADMUX (*(volatile unsigned char*)0X27)
#define ADCSRA (*(volatile unsigned char*)0X26)
#define ADCH (*(volatile unsigned char*)0X25)
#define ADCL (*(volatile unsigned char*)0X24)
#define ACSR (*(volatile unsigned char*)0X28)
#define ADC (*(volatile unsigned short*)0X24)


#endif /* REGISTERS_H_ */