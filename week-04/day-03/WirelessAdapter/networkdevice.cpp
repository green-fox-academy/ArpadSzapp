//
// Created by arpad on 2019. 02. 06..
//

#include "networkdevice.h"
NetworkDevice::NetworkDevice (std::string id, int bandwidth) : Device(id)
{
    _bandwidth = bandwidth;
}