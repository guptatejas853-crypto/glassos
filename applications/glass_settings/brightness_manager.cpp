#include "brightness_manager.h"

using namespace GlassOS;

int BrightnessManager::brightnessLevel = 75;


bool BrightnessManager::Initialize()
{
    brightnessLevel = 75;

    return true;
}


bool BrightnessManager::SetBrightness(
    int level)
{
    if(level < 0)
        level = 0;

    if(level > 100)
        level = 100;

    brightnessLevel = level;

    return true;
}


int BrightnessManager::GetBrightness()
{
    return brightnessLevel;
}


bool BrightnessManager::Increase()
{
    return SetBrightness(
        brightnessLevel + 10);
}


bool BrightnessManager::Decrease()
{
    return SetBrightness(
        brightnessLevel - 10);
}
