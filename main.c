#include <avr/io.h>
#include <avr/iom644.h>

void main(void)
{
   DDRB = 0xFF;
   DDRC = 0xFF;

   unsigned int i, o;

   while (1 == 1)
   {
      PORTB = 0xFF;
      PORTC = 0xFF;

      for (o = 0; o < 3000; ++o)
      {
         for (i = 0; i < 500; ++i)
         {
         	 asm("nop");
         }
      }

      PORTB = 0x00;
      PORTC = 0x00;

      for (o = 0; o < 3000; ++o)
      {
         for (i = 0; i < 500; ++i)
         {
         	 asm("nop");
         }
      }

   }   
}

