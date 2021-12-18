/* 
 * File:   assignment1_1.c
 * Author: Boyan Nikolov
 *
 * Created on 2 July 2017, 16:53
 */

/* Generic C libraries */
#include <stdio.h>
#include <stdlib.h>

/* XC32 libraries */
#include <xc.h>
#include <sys/attribs.h>
#include "assignment1_3.h"
/* Your own custom made libraries */

     

/* Local variables */


int main(){
    
    GPIO_init();
    
    while(1){
        if (BTNC == 1){
            LD0 = 1;
        }
        else if (BTNC == 0){
            LD0 = 0;
        }
        
    }
    
    return (0);
}

void GPIO_init(){
    
    TRISFbits.TRISF0 = 1;
    
    TRISA &= ~0xFF;
    
    LATAbits.LATA0 = 0;

    LATA = 0x00;
}