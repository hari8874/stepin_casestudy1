
#include "func.h"
#include <avr/io.h>
#include<util/delay.h>
int main(void)
{
    port();
    InitADC();
    uint16_t temp();
   while(1)
    {
    if(!(PIND & (1<<PD0)))
    {
         OCR1A =100;
        _delay_ms(200);
         OCR1A =250;
        _delay_ms(200);
         OCR1A =400;
        _delay_ms(200);
         OCR1A =550;
        _delay_ms(200);
         OCR1A =800;
        _delay_ms(200);
         OCR1A =950;
        _delay_ms(200);
         OCR1A =1024;
        _delay_ms(200);

    PORTB|=(1<<PB0);
    //if ((PB0 &= (1<<PB0))
    //{
        _delay_ms(200);
     //uint16_t temp;
    temp=ReadADC(0);
    _delay_ms(200);

   // }


    }
     else
        {
                  PORTB&=~(1<<PB0);
               _delay_ms(2000);

        }
    }

    return 0;
}



