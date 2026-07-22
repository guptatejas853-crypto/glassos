#include "sidebar.h"

using namespace GlassOS;

std::string Sidebar::currentLocation = "/";

bool Sidebar::Initialize()
{
    currentLocation = "/";

    return true;
}

void Sidebar::OpenHome()
{
    currentLocation = "Home";
}

void Sidebar::OpenDesktop()
{
    currentLocation = "Desktop";
}

void Sidebar::OpenDocuments()
{
    currentLocation = "Documents";
}

void Sidebar::OpenDownloads()
{
    currentLocation = "Downloads";
}

std::string Sidebar::CurrentLocation()
{
    return currentLocation;
}
