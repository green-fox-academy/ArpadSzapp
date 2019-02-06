//
// Created by arpad on 2019. 02. 06..
//

#ifndef WIRELESSADAPTER_WIRELESSADAPTER_H
#define WIRELESSADAPTER_WIRELESSADAPTER_H

#include "USBdevice.h"
#include "networkdevice.h"
class WirelessAdapter : public USB_Device, public NetworkDevice
{
public:
    WirelessAdapter(std::string id, USBType usbType, int bandwidth);

    void info();

};

#endif //WIRELESSADAPTER_WIRELESSADAPTER_H
