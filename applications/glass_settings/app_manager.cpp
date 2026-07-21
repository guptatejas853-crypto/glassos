#include "app_manager.h"

#include <algorithm>

using namespace GlassOS;

std::vector<std::string>
AppManager::apps;


bool AppManager::Initialize()
{
    apps.clear();

    apps.push_back("Glass Explorer");
    apps.push_back("Glass Notebook");
    apps.push_back("Glass Terminal");
    apps.push_back("Glass Settings");

    return true;
}


bool AppManager::Install(
    const std::string& app)
{
    if(IsInstalled(app))
        return false;

    apps.push_back(app);

    return true;
}


bool AppManager::Uninstall(
    const std::string& app)
{
    auto it =
        std::find(
            apps.begin(),
            apps.end(),
            app);

    if(it == apps.end())
        return false;

    apps.erase(it);

    return true;
}


bool AppManager::IsInstalled(
    const std::string& app)
{
    return std::find(
        apps.begin(),
        apps.end(),
        app)
        != apps.end();
}


const std::vector<std::string>&
AppManager::GetInstalledApps()
{
    return apps;
}
