#pragma once

#include <string>
#include <vector>

namespace GlassOS
{
    class RecycleBin
    {
    public:

        static bool Initialize();

        static void Move(
            const std::string& path);

        static void Restore(
            const std::string& path);

        static void Empty();

        static std::vector<std::string> Items();

    private:

        static std::vector<std::string> files;
    };
}
