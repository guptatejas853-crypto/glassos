#include "app_permissions.h"

#include <unordered_set>

using namespace GlassOS;

static std::unordered_set<std::string>
permissions;


bool AppPermissions::Initialize()
{
    permissions.clear();

    return true;
}


bool AppPermissions::Grant(
    const std::string& app,
    const std::string& permission)
{
    permissions.insert(
        app + ":" + permission);

    return true;
}


bool AppPermissions::Revoke(
    const std::string& app,
    const std::string& permission)
{
    permissions.erase(
        app + ":" + permission);

    return true;
}


bool AppPermissions::Check(
    const std::string& app,
    const std::string& permission)
{
    return permissions.find(
        app + ":" + permission)
        != permissions.end();
}


bool AppPermissions::Clear()
{
    permissions.clear();

    return true;
}
