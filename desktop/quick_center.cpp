#include "quick_center.h"

#include <iostream>

using namespace GlassOS;

bool QuickCenter::visible = false;

bool QuickCenter::Initialize()
{
    visible = false;
    return true;
}

bool QuickCenter::Show()
{
    visible = true;

    DrawHeader();
    DrawTiles();
    DrawBatteryCard();

    std::cout << "[QuickCenter] Opened\n";

    return true;
}

bool QuickCenter::Hide()
{
    visible = false;

    std::cout << "[QuickCenter] Closed\n";

    return true;
}

bool QuickCenter::Toggle()
{
    if (visible)
        return Hide();

    return Show();
}

bool QuickCenter::Refresh()
{
    if (!visible)
        return true;

    DrawTiles();
    DrawBatteryCard();

    return true;
}

bool QuickCenter::DrawHeader()
{
    std::cout << "[QuickCenter] Header Loaded\n";
    return true;
}

bool QuickCenter::DrawTiles()
{
    std::cout << "[QuickCenter] Tiles Loaded\n";
    return true;
}

bool QuickCenter::DrawBatteryCard()
{
    std::cout << "[QuickCenter] Battery Card Loaded\n";
    return true;
}
