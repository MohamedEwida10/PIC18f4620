/* 
 * File:   ecu_layer_init.c
 * Author: mohamed.ewida
 * LinkedIn : https://www.linkedin.com/in/mohamed-ewida-181151264/
 * Created on October 21, 2023, 9:11 PM
 */

#include "ecu_layer_init.h"

chr_lcd_4bit_t lcd1 ={
.rs.port = PORTC_INDEX,
.rs.direction = DICRECTION_OUTOUT,
.rs.pin = PIN0,
.rs.logic = LOW,

.en.port = PORTC_INDEX,
.en.direction = DICRECTION_OUTOUT,
.en.pin = PIN1,
.en.logic = LOW,

.data[0].port = PORTC_INDEX,
.data[0].direction = DICRECTION_OUTOUT,
.data[0].pin = PIN2,
.data[0].logic = LOW,

.data[1].port = PORTC_INDEX,
.data[1].direction = DICRECTION_OUTOUT,
.data[1].pin = PIN3,
.data[1].logic = LOW,

.data[2].port = PORTC_INDEX,
.data[2].direction = DICRECTION_OUTOUT,
.data[2].pin = PIN4,
.data[2].logic = LOW,

.data[3].port = PORTC_INDEX,
.data[3].direction = DICRECTION_OUTOUT,
.data[3].pin = PIN5,
.data[3].logic = LOW,

};

chr_lcd_8bit_t lcd2 ={
.rs.port = PORTC_INDEX,
.rs.direction = DICRECTION_OUTOUT,
.rs.pin = PIN6,
.rs.logic = LOW,

.en.port = PORTC_INDEX,
.en.direction = DICRECTION_OUTOUT,
.en.pin = PIN7,
.en.logic = LOW,

.data[0].port = PORTD_INDEX,
.data[0].direction = DICRECTION_OUTOUT,
.data[0].pin = PIN0,
.data[0].logic = LOW,

.data[1].port = PORTD_INDEX,
.data[1].direction = DICRECTION_OUTOUT,
.data[1].pin = PIN1,
.data[1].logic = LOW,

.data[2].port = PORTD_INDEX,
.data[2].direction = DICRECTION_OUTOUT,
.data[2].pin = PIN2,
.data[2].logic = LOW,

.data[3].port = PORTD_INDEX,
.data[3].direction = DICRECTION_OUTOUT,
.data[3].pin = PIN3,
.data[3].logic = LOW,

.data[4].port = PORTD_INDEX,
.data[4].direction = DICRECTION_OUTOUT,
.data[4].pin = PIN4,
.data[4].logic = LOW,

.data[5].port = PORTD_INDEX,
.data[5].direction = DICRECTION_OUTOUT,
.data[5].pin = PIN5,
.data[5].logic = LOW,

.data[6].port = PORTD_INDEX,
.data[6].direction = DICRECTION_OUTOUT,
.data[6].pin = PIN6,
.data[6].logic = LOW,

.data[7].port = PORTD_INDEX,
.data[7].direction = DICRECTION_OUTOUT,
.data[7].pin = PIN7,
.data[7].logic = LOW,

};


void ecu_layer_Initialization(void)
{
    lcd_4bit_initialize(&lcd1);
    lcd_8bit_initialize(&lcd2);
}