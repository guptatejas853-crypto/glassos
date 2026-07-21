#include "sidebar.h"

using namespace GlassOS;

std::vector<std::string> Sidebar::items;

bool Sidebar::Initialize()
{
    return LoadDefaultItems();
}

bool Sidebar::LoadDefaultItems()
{
    items.clear();

    items.push_back("Home");
    items.push_back("Favorites");
    items.push_back("This PC");

    items.push_back("Documents");
    items.push_back("Downloads");
    items.push_back("Desktop");

    items.push_back("Pictures");
    items.push_back("Music");
    items.push_back("Videos");

    items.push_back("Recycle Bin");

    return true;
}

const std::vector<std::string>&
Sidebar::GetItems()
{
    return items;
}
