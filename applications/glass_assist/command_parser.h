#pragma once

#include <string>

namespace GlassOS
{
    class CommandParser
    {
    public:

        static std::string Parse(
            const std::string& input);
    };
}
