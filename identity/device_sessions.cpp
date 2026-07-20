#include "device_sessions.h"

using namespace GlassOS;

std::vector<DeviceSession> DeviceSessions::devices;

bool DeviceSessions::Initialize()
{
    devices.clear();
    return true;
}

bool DeviceSessions::AddDevice(const DeviceSession& device)
{
    devices.push_back(device);
    return true;
}

bool DeviceSessions::RemoveDevice(const std::string& deviceId)
{
    for (auto it = devices.begin(); it != devices.end(); ++it)
    {
        if (it->deviceId == deviceId)
        {
            devices.erase(it);
            return true;
        }
    }

    return false;
}

std::vector<DeviceSession> DeviceSessions::GetDevices()
{
    return devices;
}

bool DeviceSessions::LogoutDevice(const std::string& deviceId)
{
    return RemoveDevice(deviceId);
}
