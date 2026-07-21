#pragma once

#include <string>

namespace GlassOS
{
    class AppPermissions
    {
    public:
        static bool Initialize();

        static bool Grant(
            const std::string& app,
            const std::string& permission);

        static bool Revoke(
            const std::string& app,
            const std::string& permission);

        static bool Check(
            const std::string& app,
            const std::string& permission);

        static bool Clear();
    };
}
