#include "theme_manager.h"

using namespace GlassOS;

std::string ThemeManager::currentTheme = "Glass";

std::string ThemeManager::accentColor = "Blue";

bool ThemeManager::transparency = true;

bool ThemeManager::Initialize()
{
    currentTheme = "Glass";
    accentColor = "Blue";
    transparency = true;

    return true;
}

bool ThemeManager::SetTheme(
    const std::string& theme)
{
    currentTheme = theme;

    return true;
}

std::string ThemeManager::GetTheme()
{
    return currentTheme;
}

bool ThemeManager::SetAccentColor(
    const std::string& color)
{
    accentColor = color;

    return true;
}

std::string ThemeManager::GetAccentColor()
{
    return accentColor;
}

bool ThemeManager::EnableTransparency(
    bool enabled)
{
    transparency = enabled;

    return true;
}

bool ThemeManager::TransparencyEnabled()
{
    return transparency;
}
