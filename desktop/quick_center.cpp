#include "quick_center.h"

using namespace GlassOS;

bool QuickCenter::visible = false;

bool QuickCenter::Initialize()
{
    visible = false;

    return true;
}

void QuickCenter::Show()
{
    visible = true;
}

void QuickCenter::Hide()
{
    visible = false;
}

bool QuickCenter::IsVisible()
{
    return visible;
}
