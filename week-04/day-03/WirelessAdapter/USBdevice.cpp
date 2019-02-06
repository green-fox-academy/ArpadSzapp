//
// Created by arpad on 2019. 02. 06..
//

#include "USBdevice.h"

USB_Device::USB_Device (std::string id, USBType usbType ) : Device(id)
{
    _usbType = usbType;
}