#pragma once

#include <string>
#include <unordered_map>

namespace GlassOS
{
    class IconManager
    {
    public:
        static bool Initialize();

        static bool RegisterIcon(
            const std::string& id,
            const std::string& path);

        static std::string GetIcon(
            const std::string& id);

        static bool Exists(
            const std::string& id);

    private:
        static std::unordered_map<
            std::string,
            std::string> icons;
    };
}
