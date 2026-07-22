#pragma once

#include <string>

namespace GlassOS
{
    class ApplicationLauncher
    {
    public:

        static bool Initialize();

        static bool Launch(
            const std::string& name);
    };
}
