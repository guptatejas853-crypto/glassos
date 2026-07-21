#include "accessibility_manager.h"

using namespace GlassOS;

bool AccessibilityManager::highContrast = false;

bool AccessibilityManager::screenReader = false;

int AccessibilityManager::textScale = 100;


bool AccessibilityManager::Initialize()
{
    highContrast = false;

    screenReader = false;

    textScale = 100;

    return true;
}


bool AccessibilityManager::EnableHighContrast()
{
    highContrast = true;

    return true;
}


bool AccessibilityManager::DisableHighContrast()
{
    highContrast = false;

    return true;
}


bool AccessibilityManager::IsHighContrastEnabled()
{
    return highContrast;
}


bool AccessibilityManager::SetTextScale(
    int scale)
{
    if(scale < 50)
        scale = 50;

    if(scale > 200)
        scale = 200;

    textScale = scale;

    return true;
}


int AccessibilityManager::GetTextScale()
{
    return textScale;
}


bool AccessibilityManager::EnableScreenReader()
{
    screenReader = true;

    return true;
}


bool AccessibilityManager::DisableScreenReader()
{
    screenReader = false;

    return true;
}


bool AccessibilityManager::IsScreenReaderEnabled()
{
    return screenReader;
}
