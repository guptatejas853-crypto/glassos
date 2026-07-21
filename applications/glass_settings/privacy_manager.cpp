#include "privacy_manager.h"

#include <unordered_map>

using namespace GlassOS;

static std::unordered_map<
    std::string,
    bool> permissions;

static bool trackingProtection = true;


bool PrivacyManager::Initialize()
{
    permissions.clear();

    trackingProtection = true;

    return true;
}


bool PrivacyManager::SetPermission(
    const std::string& app,
    const std::string& permission,
    bool enabled)
{
    permissions[
        app + ":" + permission
    ] = enabled;

    return true;
}


bool PrivacyManager::GetPermission(
    const std::string& app,
    const std::string& permission)
{
    auto key =
        app + ":" + permission;

    auto it =
        permissions.find(key);

    if(it == permissions.end())
        return false;

    return it->second;
}


bool PrivacyManager::EnableTrackingProtection()
{
    trackingProtection = true;

    return true;
}


bool PrivacyManager::DisableTrackingProtection()
{
    trackingProtection = false;

    return true;
}


bool PrivacyManager::IsTrackingProtectionEnabled()
{
    return trackingProtection;
}
