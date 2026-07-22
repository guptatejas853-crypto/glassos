#pragma once

#include <string>

namespace GlassOS
{
    class Sidebar
    {
    public:

        static bool Initialize();

        static void OpenHome();

        static void OpenDesktop();

        static void OpenDocuments();

        static void OpenDownloads();

        static std::string CurrentLocation();

    private:

        static std::string currentLocation;
    };
}
