#include "device_manager.h"

using namespace GlassOS;

std::vector<DeviceInfo>
DeviceManager::devices;


bool DeviceManager::Initialize()
{
    devices.clear();

    ScanDevices();

    return true;
}


bool DeviceManager::ScanDevices()
{
    devices.clear();

    /*
        TODO:
        Replace this placeholder implementation with
        real hardware enumeration.

        Future implementation should detect:

        - Graphics Adapter
        - Audio Device
        - Network Adapter
        - Bluetooth Adapter
        - USB Controllers
        - Camera
        - Touchpad
        - Keyboard
        - Mouse
        - Battery
        - Storage Devices
        - Monitors

        Detection should be performed through the
        GlassOS Hardware Abstraction Layer (HAL)
        or the underlying operating system APIs.
    */

    devices.push_back(
    {
        "Unknown Device",
        "Unknown",
        "Detected"
    });

    return true;
}


const std::vector<DeviceInfo>&
DeviceManager::GetDevices()
{
    return devices;
}


bool DeviceManager::EnableDevice(
    const std::string& name)
{
    for(auto& device : devices)
    {
        if(device.name == name)
        {
            device.status = "Enabled";

            return true;
        }
    }

    return false;
}


bool DeviceManager::DisableDevice(
    const std::string& name)
{
    for(auto& device : devices)
    {
        if(device.name == name)
        {
            device.status = "Disabled";

            return true;
        }
    }

    return false;
}


bool DeviceManager::DeviceExists(
    const std::string& name)
{
    for(const auto& device : devices)
    {
        if(device.name == name)
            return true;
    }

    return false;
}
