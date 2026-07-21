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

    drivers.push_back(
    {
        "Graphics Driver",
        "1.0",
        "Installed"
    });

    drivers.push_back(
    {
        "Audio Driver",
        "1.0",
        "Installed"
    });

    drivers.push_back(
    {
        "Network Driver",
        "1.0",
        "Installed"
    });

    drivers.push_back(
    {
        "USB Driver",
        "1.0",
        "Installed"
    });

    drivers.push_back(
    {
        "System Driver",
        "1.0",
        "Installed"
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
