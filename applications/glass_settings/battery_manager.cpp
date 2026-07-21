#include "battery_manager.h"

using namespace GlassOS;

int BatteryManager::batteryLevel = 100;

bool BatteryManager::charging = false;

bool BatteryManager::batterySaver = false;

int BatteryManager::chargingLimit = 100;


bool BatteryManager::Initialize()
{
    batteryLevel = 100;

    charging = false;

    batterySaver = false;

    chargingLimit = 100;

    return true;
}


int BatteryManager::GetBatteryLevel()
{
    return batteryLevel;
}


bool BatteryManager::IsCharging()
{
    return charging;
}


bool BatteryManager::EnableBatterySaver()
{
    batterySaver = true;

    return true;
}


bool BatteryManager::DisableBatterySaver()
{
    batterySaver = false;

    return true;
}


bool BatteryManager::IsBatterySaverEnabled()
{
    return batterySaver;
}


bool BatteryManager::SetChargingLimit(
    int limit)
{
    if(limit < 50)
        limit = 50;

    if(limit > 100)
        limit = 100;

    chargingLimit = limit;

    return true;
}


int BatteryManager::GetChargingLimit()
{
    return chargingLimit;
}
