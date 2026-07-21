#include "quick_center_manager.h"

using namespace GlassOS;

bool QuickCenterManager::network = true;

bool QuickCenterManager::bluetooth = false;

bool QuickCenterManager::brightness = true;

bool QuickCenterManager::glassShare = false;

bool QuickCenterManager::glassCast = false;


bool QuickCenterManager::Initialize()
{
    network = true;
    bluetooth = false;
    brightness = true;
    glassShare = false;
    glassCast = false;

    return true;
}


bool QuickCenterManager::ToggleNetwork()
{
    network = !network;

    return true;
}


bool QuickCenterManager::ToggleBluetooth()
{
    bluetooth = !bluetooth;

    return true;
}


bool QuickCenterManager::ToggleBrightness()
{
    brightness = !brightness;

    return true;
}


bool QuickCenterManager::ToggleGlassShare()
{
    glassShare = !glassShare;

    return true;
}


bool QuickCenterManager::ToggleGlassCast()
{
    glassCast = !glassCast;

    return true;
}


bool QuickCenterManager::IsNetworkActive()
{
    return network;
}


bool QuickCenterManager::IsBluetoothActive()
{
    return bluetooth;
}


bool QuickCenterManager::IsBrightnessActive()
{
    return brightness;
}


bool QuickCenterManager::IsGlassShareActive()
{
    return glassShare;
}


bool QuickCenterManager::IsGlassCastActive()
{
    return glassCast;
}
