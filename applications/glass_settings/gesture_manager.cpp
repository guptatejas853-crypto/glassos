#include "gesture_manager.h"

#include <unordered_map>

using namespace GlassOS;

bool GestureManager::enabled = true;

static std::unordered_map<
    std::string,
    std::string> gestures;


bool GestureManager::Initialize()
{
    enabled = true;

    gestures.clear();

    gestures["SwipeLeft"] = "Back";
    gestures["SwipeRight"] = "Forward";
    gestures["SwipeUp"] = "OpenMenu";
    gestures["SwipeDown"] = "CloseMenu";

    return true;
}


bool GestureManager::EnableGestures()
{
    enabled = true;

    return true;
}


bool GestureManager::DisableGestures()
{
    enabled = false;

    return true;
}


bool GestureManager::IsEnabled()
{
    return enabled;
}


bool GestureManager::SetGesture(
    const std::string& gesture,
    const std::string& action)
{
    gestures[gesture] = action;

    return true;
}


std::string GestureManager::GetAction(
    const std::string& gesture)
{
    auto it =
        gestures.find(gesture);

    if(it == gestures.end())
        return "";

    return it->second;
}
