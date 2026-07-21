#include "font_manager.h"

using namespace GlassOS;

std::string FontManager::systemFont =
    "Glass Sans";

int FontManager::fontSize = 14;

bool FontManager::smoothFonts = true;


bool FontManager::Initialize()
{
    systemFont = "Glass Sans";

    fontSize = 14;

    smoothFonts = true;

    return true;
}


bool FontManager::SetSystemFont(
    const std::string& font)
{
    systemFont = font;

    return true;
}


std::string FontManager::GetSystemFont()
{
    return systemFont;
}


bool FontManager::SetFontSize(
    int size)
{
    if(size < 8)
        size = 8;

    if(size > 72)
        size = 72;

    fontSize = size;

    return true;
}


int FontManager::GetFontSize()
{
    return fontSize;
}


bool FontManager::EnableSmoothFonts()
{
    smoothFonts = true;

    return true;
}


bool FontManager::DisableSmoothFonts()
{
    smoothFonts = false;

    return true;
}


bool FontManager::SmoothFontsEnabled()
{
    return smoothFonts;
}
