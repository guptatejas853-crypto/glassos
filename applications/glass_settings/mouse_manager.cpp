#include "mouse_manager.h"

using namespace GlassOS;

int MouseManager::sensitivity = 50;

int MouseManager::scrollSpeed = 5;

bool MouseManager::acceleration = true;


bool MouseManager::Initialize()
{
    sensitivity = 50;

    scrollSpeed = 5;

    acceleration = true;

    return true;
}


bool MouseManager::SetSensitivity(
    int value)
{
    if(value < 1)
        value = 1;

    if(value > 100)
        value = 100;

    sensitivity = value;

    return true;
}


int MouseManager::GetSensitivity()
{
    return sensitivity;
}


bool MouseManager::EnableAcceleration()
{
    acceleration = true;

    return true;
}


bool MouseManager::DisableAcceleration()
{
    acceleration = false;

    return true;
}


bool MouseManager::IsAccelerationEnabled()
{
    return acceleration;
}


bool MouseManager::SetScrollSpeed(
    int speed)
{
    scrollSpeed = speed;

    return true;
}


int MouseManager::GetScrollSpeed()
{
    return scrollSpeed;
}
