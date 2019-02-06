//
// Created by arpad on 2019. 02. 06..
//

#ifndef WIRELESSADAPTER_USBDEVICE_H
#define WIRELESSADAPTER_USBDEVICE_H
#include "device.h"

enum USBType
{
    USB_TYPE_2,
    USB_TYPE_3
};

std::string usbTypeToSrting (USBType usbType);

class USB_Device : virtual public Device
{
public:
    USB_Device (std::string id, USBType usbType);

protected:
   USBType _usbType;

};

#endif //WIRELESSADAPTER_USBDEVICE_H
