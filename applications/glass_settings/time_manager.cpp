#include "time_manager.h"

using namespace GlassOS;

std::string TimeManager::timeZone =
    "UTC";

std::string TimeManager::timeFormat =
    "24H";

bool TimeManager::autoSync = true;


bool TimeManager::Initialize()
{
    timeZone = "UTC";

    timeFormat = "24H";

    autoSync = true;

    return true;
}


bool TimeManager::SetTimeZone(
    const std::string& zone)
{
    timeZone = zone;

    return true;
}


std::string TimeManager::GetTimeZone()
{
    return timeZone;
}


bool TimeManager::SetFormat(
    const std::string& format)
{
    timeFormat = format;

    return true;
}


std::string TimeManager::GetFormat()
{
    return timeFormat;
}


bool TimeManager::EnableAutoSync()
{
    autoSync = true;

    return true;
}


bool TimeManager::DisableAutoSync()
{
    autoSync = false;

    return true;
}


bool TimeManager::AutoSyncEnabled()
{
    return autoSync;
}
