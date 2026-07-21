#include "address_bar.h"

using namespace GlassOS;

std::string AddressBar::currentPath;

bool AddressBar::Initialize()
{
    currentPath = "/";

    return true;
}

bool AddressBar::SetPath(
    const std::string& path)
{
    currentPath = path;

    return true;
}

std::string AddressBar::GetPath()
{
    return currentPath;
}

bool AddressBar::Navigate(
    const std::string& path)
{
    currentPath = path;

    return true;
}

bool AddressBar::Clear()
{
    currentPath.clear();

    return true;
}
