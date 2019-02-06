//
// Created by arpad on 2019. 02. 06..
//

#ifndef WIRELESSADAPTER_DEVICE_H
#define WIRELESSADAPTER_DEVICE_H
#include <iostream>
class Device
{
public:
    Device(std::string id);

     std:: string getID();

private:
    std::string _id;

};

#endif //WIRELESSADAPTER_DEVICE_H
