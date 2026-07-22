#pragma once

#include <string>

namespace GlassOS
{
    class AddressBar
    {
    public:

        static bool Initialize();

        static void SetPath(
            const std::string& path);

        static std::string GetPath();

    private:

        static std::string currentPath;
    };
}
