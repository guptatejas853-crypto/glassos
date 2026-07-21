#include "region_manager.h"

using namespace GlassOS;

std::string RegionManager::country =
    "India";

std::string RegionManager::region =
    "Asia";

std::string RegionManager::currency =
    "INR";


bool RegionManager::Initialize()
{
    country = "India";

    region = "Asia";

    currency = "INR";

    return true;
}


bool RegionManager::SetCountry(
    const std::string& value)
{
    country = value;

    return true;
}


std::string RegionManager::GetCountry()
{
    return country;
}


bool RegionManager::SetRegion(
    const std::string& value)
{
    region = value;

    return true;
}


std::string RegionManager::GetRegion()
{
    return region;
}


bool RegionManager::SetCurrency(
    const std::string& value)
{
    currency = value;

    return true;
}


std::string RegionManager::GetCurrency()
{
    return currency;
}
