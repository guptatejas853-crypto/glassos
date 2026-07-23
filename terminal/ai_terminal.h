#pragma once

#include <string>

namespace GlassOS
{
    class AITerminal
    {
    public:

        static bool Initialize();

        static std::string Execute(
            const std::string& command);
    };
}
