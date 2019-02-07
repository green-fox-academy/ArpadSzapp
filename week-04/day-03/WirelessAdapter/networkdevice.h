//
// Created by arpad on 2019. 02. 06..
//

#ifndef WIRELESSADAPTER_NETWORKDEVICE_H
#define WIRELESSADAPTER_NETWORKDEVICE_H
#include "device.h"
#include "USBdevice.h"
class NetworkDevice : virtual public Device
{
public:

    NetworkDevice (std::string id, int bandwidth);

protected:
    int _bandwidth;

};

#endif //WIRELESSADAPTER_NETWORKDEVICE_H
