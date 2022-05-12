#ifndef GPIO_CONFIG_H
#define GPIO_CONFIG_H

#include "Library/Windows/SLABCP2112.h"

#define GPIO_0         HID_SMBUS_DIRECTION_OUTPUT
#define GPIO_1         HID_SMBUS_DIRECTION_OUTPUT
#define GPIO_2         HID_SMBUS_DIRECTION_INPUT
#define GPIO_3         HID_SMBUS_DIRECTION_INPUT
#define GPIO_4         HID_SMBUS_DIRECTION_INPUT
#define GPIO_5         HID_SMBUS_DIRECTION_INPUT
#define GPIO_6         HID_SMBUS_DIRECTION_INPUT
#define GPIO_7         HID_SMBUS_DIRECTION_INPUT

#define GPIO_0_MODE    HID_SMBUS_MODE_PUSH_PULL
#define GPIO_1_MODE    HID_SMBUS_MODE_PUSH_PULL
#define GPIO_2_MODE    HID_SMBUS_MODE_OPEN_DRAIN
#define GPIO_3_MODE    HID_SMBUS_MODE_OPEN_DRAIN
#define GPIO_4_MODE    HID_SMBUS_MODE_OPEN_DRAIN
#define GPIO_5_MODE    HID_SMBUS_MODE_OPEN_DRAIN
#define GPIO_6_MODE    HID_SMBUS_MODE_OPEN_DRAIN
#define GPIO_7_MODE    HID_SMBUS_MODE_OPEN_DRAIN

#define TX             TRUE
#define RX             TRUE

#endif // GPIO_CONFIG_H
