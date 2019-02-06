//
// Created by arpad on 2019. 02. 06..
//

#ifndef WIRELESSADAPTER_WIRELESSADAPTER_H
#define WIRELESSADAPTER_WIRELESSADAPTER_H

#include "USBdevice.h"
#include "networkdevice.h"
class WirelessAdapter : protected USB_Device, protected NetworkDevice
{
    WirelessAdapter()

};

#endif //WIRELESSADAPTER_WIRELESSADAPTER_H
