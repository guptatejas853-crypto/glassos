#include "display_manager.h"

using namespace GlassOS;

std::string DisplayManager::resolution =
    "1920x1080";

int DisplayManager::refreshRate = 60;

int DisplayManager::scaling = 100;

std::string DisplayManager::orientation =
    "Landscape";


bool DisplayManager::Initialize()
{
    resolution = "1920x1080";

    refreshRate = 60;

    scaling = 100;

    orientation = "Landscape";

    return true;
}


bool DisplayManager::SetResolution(
    const std::string& value)
{
    resolution = value;

    return true;
}


std::string DisplayManager::GetResolution()
{
    return resolution;
}


bool DisplayManager::SetRefreshRate(
    int rate)
{
    refreshRate = rate;

    return true;
}


int DisplayManager::GetRefreshRate()
{
    return refreshRate;
}


bool DisplayManager::SetScaling(
    int scale)
{
    scaling = scale;

    return true;
}


int DisplayManager::GetScaling()
{
    return scaling;
}


bool DisplayManager::SetOrientation(
    const std::string& value)
{
    orientation = value;

    return true;
}


std::string DisplayManager::GetOrientation()
{
    return orientation;
}
