#include "settings_storage.h"

#include <fstream>

using namespace GlassOS;

std::map<
    std::string,
    std::string>
SettingsStorage::settings;


bool SettingsStorage::Initialize()
{
    return Load();
}


void SettingsStorage::SetValue(
    const std::string& key,
    const std::string& value)
{
    settings[key] = value;
}


std::string SettingsStorage::GetValue(
    const std::string& key)
{
    auto it = settings.find(key);

    if(it == settings.end())
        return "";

    return it->second;
}


bool SettingsStorage::Save()
{
    std::ofstream file("glass_settings.cfg");

    if(!file.is_open())
        return false;

    for(const auto& item : settings)
    {
        file << item.first
             << "="
             << item.second
             << "\n";
    }

    return true;
}


bool SettingsStorage::Load()
{
    std::ifstream file("glass_settings.cfg");

    if(!file.is_open())
        return true;

    std::string line;

    while(std::getline(file, line))
    {
        auto pos = line.find('=');

        if(pos == std::string::npos)
            continue;

        auto key = line.substr(0, pos);
        auto value = line.substr(pos + 1);

        settings[key] = value;
    }

    return true;
}
