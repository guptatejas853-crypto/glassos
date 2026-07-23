#pragma once

#include <string>

namespace GlassOS
{
    class ResponseGenerator
    {
    public:

        static std::string Generate(
            const std::string& command);
    };
}
