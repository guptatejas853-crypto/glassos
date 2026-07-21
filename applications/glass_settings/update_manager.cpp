#include "update_manager.h"

using namespace GlassOS;

std::string UpdateManager::version =
    "GlassOS 1.0";

bool UpdateManager::updateAvailable = false;


bool UpdateManager::Initialize()
{
    version = "GlassOS 1.0";

    updateAvailable = false;

    return true;
}


bool UpdateManager::CheckUpdates()
{
    updateAvailable = false;

    return true;
}


bool UpdateManager::DownloadUpdate(
    const std::string& newVersion)
{
    version = newVersion;

    updateAvailable = true;

    return true;
}


bool UpdateManager::InstallUpdate()
{
    updateAvailable = false;

    return true;
}


std::string UpdateManager::CurrentVersion()
{
    return version;
}


bool UpdateManager::IsUpdateAvailable()
{
    return updateAvailable;
}
