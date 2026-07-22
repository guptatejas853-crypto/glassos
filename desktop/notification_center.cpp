#include "notification_center.h"

using namespace GlassOS;

bool NotificationCenter::visible = false;

bool NotificationCenter::Initialize()
{
    visible = false;

    return true;
}

void NotificationCenter::Show()
{
    visible = true;
}

void NotificationCenter::Hide()
{
    visible = false;
}

bool NotificationCenter::IsVisible()
{
    return visible;
}
