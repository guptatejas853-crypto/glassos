#include "keyboard_manager.h"

using namespace GlassOS;

std::string KeyboardManager::layout =
    "US";

bool KeyboardManager::autoCorrect = true;

int KeyboardManager::repeatRate = 30;


bool KeyboardManager::Initialize()
{
    layout = "US";

    autoCorrect = true;

    repeatRate = 30;

    return true;
}


bool KeyboardManager::SetLayout(
    const std::string& value)
{
    layout = value;

    return true;
}


std::string KeyboardManager::GetLayout()
{
    return layout;
}


bool KeyboardManager::EnableAutoCorrect()
{
    autoCorrect = true;

    return true;
}


bool KeyboardManager::DisableAutoCorrect()
{
    autoCorrect = false;

    return true;
}


bool KeyboardManager::IsAutoCorrectEnabled()
{
    return autoCorrect;
}


bool KeyboardManager::SetRepeatRate(
    int rate)
{
    repeatRate = rate;

    return true;
}


int KeyboardManager::GetRepeatRate()
{
    return repeatRate;
}
