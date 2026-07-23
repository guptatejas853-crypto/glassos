#pragma once

#include <string>

namespace GlassOS
{
    class Assist
    {
    public:

        static bool Initialize();

        static std::string Process(
            const std::string& input);
    };
}
