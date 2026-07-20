#include "notification_center.h"

#include <iostream>

using namespace GlassOS;

bool NotificationCenter::visible = false;

bool NotificationCenter::Initialize()
{
    visible = false;
    return true;
}

bool NotificationCenter::Show()
{
    visible = true;

    DrawHeader();
    DrawNotificationList();
    DrawFooter();

    std::cout << "[NotificationCenter] Opened\n";

    return true;
}

bool NotificationCenter::Hide()
{
    visible = false;

    std::cout << "[NotificationCenter] Closed\n";

    return true;
}

bool NotificationCenter::Toggle()
{
    if (visible)
        return Hide();

    return Show();
}

bool NotificationCenter::AddNotification(
    const std::string& title,
    const std::string& message)
{
    std::cout
        << "[Notification] "
        << title
        << " : "
        << message
        << std::endl;

    return true;
}

bool NotificationCenter::ClearAll()
{
    std::cout << "[NotificationCenter] Cleared\n";

    return true;
}

bool NotificationCenter::DrawHeader()
{
    std::cout << "[NotificationCenter] Header Loaded\n";

    return true;
}

bool NotificationCenter::DrawNotificationList()
{
    std::cout << "[NotificationCenter] Notification List Loaded\n";

    return true;
}

bool NotificationCenter::DrawFooter()
{
    std::cout << "[NotificationCenter] Footer Loaded\n";

    return true;
}
