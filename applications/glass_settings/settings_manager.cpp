#include "settings_manager.h"

#include <unordered_map>

using namespace GlassOS;

static std::unordered_map<
    std::string,
    std::string> settings;

bool SettingsManager::Initialize()
{
    settings.clear();

    return true;
}

bool SettingsManager::Load()
{
    return true;
}

bool SettingsManager::Save()
{
    return true;
}

bool SettingsManager::SetValue(
    const std::string& key,
    const std::string& value)
{
    settings[key] = value;

    return true;
}

std::string SettingsManager::GetValue(
    const std::string& key)
{
    auto it = settings.find(key);

    if(it == settings.end())
        return "";

    return it->second;
}

bool SettingsManager::Exists(
    const std::string& key)
{
    return settings.find(key) != settings.end();
}
