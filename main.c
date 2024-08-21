/*
 * File:   main.c
 * Author: 90531
 *
 * Created on 23 Mart 2024 Cumartesi, 21:26
 */


#include <xc.h>

// CONFIG
#pragma config FOSC = EXTRC     // Oscillator Selection bits (RC oscillator)
#pragma config WDTE = OFF       // Watchdog Timer (WDT enabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (Power-up Timer is disabled)
#pragma config CP = OFF         // Code Protection bit (Code protection disabled)

#define _XTAL_FREQ 4000000

void __interrupt() Kesme(void){
    ?F(RBIF == 1 & ){
        
    }
}

void main(void) {
    
    GIE=1;
    RBIE=1;
    TRISB=0XF0; //0b 1111 0000
    TRISA=0;
    PORTA=0;
    
    while(1){
        RB1 = 0;
        __delay_ms(500);
        RB1=1;
        __delay_ms(500);
        
    }
}
