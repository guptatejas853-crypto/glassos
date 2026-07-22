#include "address_bar.h"

using namespace GlassOS;

std::string AddressBar::currentPath = "/";

bool AddressBar::Initialize()
{
    currentPath = "/";

    return true;
}

void AddressBar::SetPath(
    const std::string& path)
{
    currentPath = path;
}

std::string AddressBar::GetPath()
{
    return currentPath;
}
