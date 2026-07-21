#include "notification_manager.h"

using namespace GlassOS;

std::vector<Notification>
NotificationManager::notifications;

bool NotificationManager::enabled = true;


bool NotificationManager::Initialize()
{
    notifications.clear();

    enabled = true;

    return true;
}


bool NotificationManager::Send(
    const std::string& title,
    const std::string& message)
{
    if(!enabled)
        return false;

    notifications.push_back(
    {
        title,
        message
    });

    return true;
}


bool NotificationManager::Clear()
{
    notifications.clear();

    return true;
}


const std::vector<Notification>&
NotificationManager::GetNotifications()
{
    return notifications;
}


bool NotificationManager::Enable()
{
    enabled = true;

    return true;
}


bool NotificationManager::Disable()
{
    enabled = false;

    return true;
}


bool NotificationManager::IsEnabled()
{
    return enabled;
}
