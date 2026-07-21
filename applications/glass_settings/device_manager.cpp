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

    devices.push_back(
    {
        "Graphics Adapter",
        "GPU",
        "Enabled"
    });

    devices.push_back(
    {
        "Audio Device",
        "Audio",
        "Enabled"
    });

    devices.push_back(
    {
        "Wi-Fi Adapter",
        "Network",
        "Enabled"
    });

    devices.push_back(
    {
        "Bluetooth Adapter",
        "Bluetooth",
        "Enabled"
    });

    devices.push_back(
    {
        "USB Controller",
        "USB",
        "Enabled"
    });

    devices.push_back(
    {
        "Touchpad",
        "Input",
        "Enabled"
    });

    devices.push_back(
    {
        "Camera",
        "Camera",
        "Enabled"
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
