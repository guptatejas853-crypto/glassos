#pragma once

#include <string>
#include <vector>

namespace GlassOS
{
    class CommandValidator
    {
    public:

        static bool Initialize();

        static bool CommandExists(
            const std::string& command);

        static bool Validate(
            const std::string& command);

        static std::vector<std::string>
        Suggestions(
            const std::string& command);

    };
}
