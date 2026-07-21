#include "touchpad_manager.h"

using namespace GlassOS;

bool TouchpadManager::enabled = true;

bool TouchpadManager::tapToClick = true;

bool TouchpadManager::naturalScroll = true;


bool TouchpadManager::Initialize()
{
    enabled = true;

    tapToClick = true;

    naturalScroll = true;

    return true;
}


bool TouchpadManager::EnableTouchpad()
{
    enabled = true;

    return true;
}


bool TouchpadManager::DisableTouchpad()
{
    enabled = false;

    return true;
}


bool TouchpadManager::IsEnabled()
{
    return enabled;
}


bool TouchpadManager::EnableTapToClick()
{
    tapToClick = true;

    return true;
}


bool TouchpadManager::DisableTapToClick()
{
    tapToClick = false;

    return true;
}


bool TouchpadManager::IsTapToClickEnabled()
{
    return tapToClick;
}


bool TouchpadManager::SetScrollDirection(
    bool natural)
{
    naturalScroll = natural;

    return true;
}


bool TouchpadManager::IsNaturalScroll()
{
    return naturalScroll;
}
