#include "theme_settings.h"

#include "settings_storage.h"

using namespace GlassOS;

bool ThemeSettings::Initialize()
{
    if(SettingsStorage::GetValue("theme").empty())
    {
        SettingsStorage::SetValue(
            "theme",
            "light");

        SettingsStorage::Save();
    }

    return true;
}

void ThemeSettings::SetTheme(
    const std::string& theme)
{
    SettingsStorage::SetValue(
        "theme",
        theme);

    SettingsStorage::Save();
}

std::string ThemeSettings::GetTheme()
{
    return SettingsStorage::GetValue(
        "theme");
}
