#pragma once

#include <string>

namespace GlassOS
{
    class ExplorerWindow
    {
    public:

        static bool Initialize();

        static void Open(
            const std::string& path);

        static std::string CurrentPath();

        static void Refresh();

    private:

        static std::string currentPath;
    };
}
