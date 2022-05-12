#ifndef CP2112_H
#define CP2112_H

#include "types.h"
#include "Library\Windows\SLABCP2112.h"
#include "qglobal.h"
#include <QString>


#define VID 0x10C4
#define PID 0xEA90

enum STATUS
{
    STATUS_FAIL,
    STATUS_OK,
    DEVICE_READY,
    DEVICE_NOT_ANWERED,
    TRANSFER_IN_PROGRESS,
    TRANSFER_COMPLETED,
};

enum CONDITION
{
    CONNECTED,
    SERIAL,
    MANUFACTURER,
    PRODUCT,
    SPEED
};

STATUS CP2112_Init(HID_SMBUS_DEVICE *device, QString cond[]);
quint8 CP2112_Close(HID_SMBUS_DEVICE device, QString *str);
QString CP2112_Error_Handler (HID_SMBUS_STATUS status);
void CP2112_Clear_Condition(QString cond[]);

#endif // CP2112_H
