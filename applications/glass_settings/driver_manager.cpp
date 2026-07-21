#include "driver_manager.h"

using namespace GlassOS;

std::vector<DriverInfo>
DriverManager::drivers;


bool DriverManager::Initialize()
{
    drivers.clear();

    ScanDrivers();

    return true;
}


bool DriverManager::ScanDrivers()
{
    drivers.clear();

    /*
        TODO:
        Replace this placeholder implementation with
        real hardware driver detection.

        Future implementation should enumerate:

        - Graphics Driver
        - Audio Driver
        - Network Driver
        - Bluetooth Driver
        - USB Driver
        - Storage Driver
        - Camera Driver
        - Chipset Driver
        - Display Driver

        Detection should use the GlassOS HAL or the
        underlying operating system APIs.
    */

    drivers.push_back(
    {
        "Unknown Driver",
        "Unknown",
        "Detected"
    });

    return true;
}


const std::vector<DriverInfo>&
DriverManager::GetDrivers()
{
    return drivers;
}


bool DriverManager::UpdateDriver(
    const std::string& name)
{
    for(auto& driver : drivers)
    {
        if(driver.name == name)
        {
            driver.status = "Updated";

            return true;
        }
    }

    return false;
}


bool DriverManager::ReinstallDriver(
    const std::string& name)
{
    for(auto& driver : drivers)
    {
        if(driver.name == name)
        {
            driver.status = "Reinstalled";

            return true;
        }
    }

    return false;
}


bool DriverManager::DriverExists(
    const std::string& name)
{
    for(const auto& driver : drivers)
    {
        if(driver.name == name)
            return true;
    }

    return false;
}
