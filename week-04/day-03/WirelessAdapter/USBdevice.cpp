//
// Created by arpad on 2019. 02. 06..
//

#include "USBdevice.h"


std::string usbTypeToString (USBType usbType)
{

    if (usbType == USBType::USB_TYPE_2) {
        return "USB_TYPE_2";
    } else if (usbType == USBType::USB_TYPE_3) {
        return "USB_TYPE_3";
    } else {
        return "Unknown USB type!";
    }
}

USB_Device::USB_Device (std::string id, USBType usbType) : Device(id)
{
    _usbType = usbType;
}

