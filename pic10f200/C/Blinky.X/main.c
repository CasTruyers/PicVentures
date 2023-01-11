/********************************************
 * File:            main.c                  *
 * Author:          Cas Truyers             *
 * Date:            10 January 2023         *
 *                                          *
 ********************************************
 *                                          *
 * Architecture:    Baseline PIC            *
 * Processor:       10F200                  *
 * Compiler:        MPLAB XC8               *
 *                                          *
 * ******************************************
 *                                          *
 * Description:     Blinks LED              *
 * Assignments:     GP0 = LED               *
 *                                          *
 *******************************************/

// CONFIG
#pragma config WDTE = OFF       // Watchdog Timer (WDT disabled)
#pragma config CP = OFF         // Code Protect (Code protection off)
#pragma config MCLRE = ON       // Master Clear Enable (GP3/MCLR pin function  is MCLR)

#define _XTAL_FREQ 4000000

#include <xc.h>

void main(void) {
    
    //initialization
    TRIS = 0b1110;  // configure GP0 as output
            
    for(;;)
    {
        GPIO = 0b0001;   // set GP0 to 1 
        __delay_ms(500);
        GPIO = 0b0000;   // set GP0 to 0   
        __delay_ms(500);
    }
}
