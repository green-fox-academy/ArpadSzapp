//
// Created by arpad on 2019. 02. 06..
//

#include "wirelessadapter.h"
WirelessAdapter::WirelessAdapter (std::string id, USBType usbType, int bandwidth)
    : Device(id), USB_Device(id, usbType), NetworkDevice(id, bandwidth)
{
    _id = id;
    _usbType = usbType;
    _bandwidth = bandwidth;
}
void WirelessAdapter::info ()
{
    std::cout << _id << "  usb type: " << usbTypeToString(_usbType) << " bandwidth: " << std::to_string(_bandwidth)
              << std::endl;
}