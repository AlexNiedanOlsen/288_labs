/*
 * ping.c
 *
 *  Created on: Oct 27, 2026
 *      Author: alex2168
 */

 #include "ping.h"

 void ping_init(void) { // Ping is located on PB3

    // Enable GPIO PB3 for part 1 of lab 10
    SYSCTL_RCGCGPIO_R |= 0b10; // Enable clock for port B
    GPIO_PORTB_AFSEL_R &= ~0b1000; // Do not enable alternate function for pin 3
    GPIO_PORTB_DEN_R |= 0b1000; // Enable digital output for pin 3
    GPIO_PORTB_DIR_R |= 0b1000; // Make pin 3 output
    GPIO_PORTB_AMSEL_R &= ~0b1000; // Disable analog mode for pin 3

 }

 int ping_read(void) {
    // Tout= 2->5uS
    // Tholdoff = 750uS
    // Set PB3 high for 2->5uS and then bring it low
    // That's all for part 1


 }