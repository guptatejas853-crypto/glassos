#include "crash_detector.h"

#include <fstream>

using namespace GlassOS;

static const char* BOOT_STATE_FILE = "glass_boot.state";

bool CrashDetector::IsUnexpectedShutdown()
{
    std::ifstream file(BOOT_STATE_FILE);

    if (!file.is_open())
        return false;

    bool completed = false;

    file >> completed;

    file.close();

    return !completed;
}

bool CrashDetector::MarkBootStarted()
{
    std::ofstream file(BOOT_STATE_FILE);

    if (!file.is_open())
        return false;

    file << false;

    file.close();

    return true;
}

bool CrashDetector::MarkBootCompleted()
{
    std::ofstream file(BOOT_STATE_FILE);

    if (!file.is_open())
        return false;

    file << true;

    file.close();

    return true;
}

bool CrashDetector::Reset()
{
    std::ofstream file(BOOT_STATE_FILE);

    if (!file.is_open())
        return false;

    file << true;

    file.close();

    return true;
}
