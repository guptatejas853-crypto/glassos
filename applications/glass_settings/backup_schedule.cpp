#include "backup_schedule.h"

using namespace GlassOS;

bool BackupSchedule::enabled = false;

std::string BackupSchedule::frequency =
    "Weekly";


bool BackupSchedule::Initialize()
{
    enabled = false;

    frequency = "Weekly";

    return true;
}


bool BackupSchedule::Enable()
{
    enabled = true;

    return true;
}


bool BackupSchedule::Disable()
{
    enabled = false;

    return true;
}


bool BackupSchedule::IsEnabled()
{
    return enabled;
}


bool BackupSchedule::SetFrequency(
    const std::string& value)
{
    frequency = value;

    return true;
}


std::string BackupSchedule::GetFrequency()
{
    return frequency;
}
