#include "power_manager.h"

using namespace GlassOS;

bool PowerManager::sleeping = false;


bool PowerManager::Initialize()
{
    sleeping = false;

    return true;
}


bool PowerManager::Sleep()
{
    sleeping = true;

    return true;
}


bool PowerManager::Shutdown()
{
    sleeping = false;

    return true;
}


bool PowerManager::Restart()
{
    sleeping = false;

    return true;
}


bool PowerManager::Hibernate()
{
    sleeping = true;

    return true;
}


bool PowerManager::IsSleeping()
{
    return sleeping;
}
