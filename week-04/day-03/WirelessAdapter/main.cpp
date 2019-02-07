#include <iostream>
#include "device.h"
#include "USBdevice.h"
#include "networkdevice.h"
#include "wirelessadapter.h"

int main (int argc, char *args[])
{
    WirelessAdapter adapter("da4c32fb21", USBType::USB_TYPE_3, 100);
    adapter.info();
}