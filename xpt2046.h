#ifndef XPT2046_TOUCH_H_
#define XPT2046_TOUCH_H_

#include "main.h"
#include <stdbool.h>

/*** Redefine if necessary ***/

// Warning! Use SPI bus with < 2.5 Mbit speed, better ~650 Kbit to be save.

#define XPT2046_IRQ_Pin       IRQ_Pin
#define XPT2046_IRQ_GPIO_Port IRQ_GPIO_Port
#define XPT2046_CS_Pin        CS_Pin
#define XPT2046_CS_GPIO_Port  CS_GPIO_Port

// change depending on screen orientation
#define XPT2046_SCALE_X 799
#define XPT2046_SCALE_Y 479

// to calibrate uncomment UART_Printf line in ili9341_touch.c
#define XPT2046_MIN_RAW_X 1
#define XPT2046_MAX_RAW_X 2
#define XPT2046_MIN_RAW_Y 1
#define XPT2046_MAX_RAW_Y 2

// call before initializing any SPI devices
bool XPT2046_TouchPressed();
bool XPT2046_TouchGetCoordinates(uint16_t* x, uint16_t* y);

#endif /* XPT2046_TOUCH_H_ */