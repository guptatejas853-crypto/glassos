#pragma once

#include <string>

namespace GlassOS
{
    class AddressBar
    {
    public:
        static bool Initialize();

        static bool SetPath(
            const std::string& path);

        static std::string GetPath();

        static bool Navigate(
            const std::string& path);

        static bool Clear();

    private:
        static std::string currentPath;
    };
}
