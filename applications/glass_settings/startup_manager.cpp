#include "startup_manager.h"

#include <algorithm>

using namespace GlassOS;

std::vector<std::string>
StartupManager::apps;

bool StartupManager::enabled = true;


bool StartupManager::Initialize()
{
    apps.clear();

    enabled = true;

    apps.push_back("GlassShell");
    apps.push_back("QuickCenter");

    return true;
}


bool StartupManager::AddStartupApp(
    const std::string& app)
{
    if(!IsStartupEnabled(app))
        apps.push_back(app);

    return true;
}


bool StartupManager::RemoveStartupApp(
    const std::string& app)
{
    auto it =
        std::find(
            apps.begin(),
            apps.end(),
            app);

    if(it != apps.end())
        apps.erase(it);

    return true;
}


bool StartupManager::IsStartupEnabled(
    const std::string& app)
{
    return std::find(
        apps.begin(),
        apps.end(),
        app)
        != apps.end();
}


const std::vector<std::string>&
StartupManager::GetStartupApps()
{
    return apps;
}


bool StartupManager::EnableStartup()
{
    enabled = true;

    return true;
}


bool StartupManager::DisableStartup()
{
    enabled = false;

    return true;
}


bool StartupManager::IsEnabled()
{
    return enabled;
}
