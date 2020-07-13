/*
 * File:   main.c
 * Author: ELDEMELAWY
 *
 * Created on June 25, 2020, 11:55 PM
 */

//#define  F_CPU 16000000UL 
#include <avr/io.h>
//#include <util/delay.h> 
#define LED 0
#define pin_number 7

void setpin_ (int pinumber)
{
  PORTA |= (1<<pinumber);  
}

void resetpin_ (int pinumber)
{
     PORTA &= ~(1<<pinumber);
}
int main(void) {
    DDRA |= (1<<LED) ;
    while (1) {
        if (PINA & (1<<pin_number))
        {
            setpin_ (LED);
        }
        else
        {
            resetpin_ (LED);
        }
    }
}
