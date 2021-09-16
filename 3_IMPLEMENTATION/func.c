
#include <avr/io.h>
#include<util/delay.h>
void InitADC()
{
    ADMUX=(1<<REFS0);
    ADCSRA=(1<<ADEN)|(7<<ADPS0);
    TCCR1A |= (1<<COM1A1) |(1<<WGM11) |(1<<WGM10);
    TCCR1B |= (1<<WGM12) |(1<<CS11) |(1<<CS10);
    //TCCR0B |=(1<<CS01);
    DDRB|=(1<<PB1);
}
uint16_t ReadADC(uint8_t ch)
{

    ADMUX&=0xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;
    ADCSRA |= (1<<ADSC);
    while(!(ADCSRA & (1<<ADIF)));
    ADCSRA |= (1<<ADIF);
    return(ADC);
}
void port()
{

DDRB |=(1<<PB0);
DDRD &=~(1<<PD0);
PORTD |=(1<<PD0);

}
