#pragma once

#include <string>

namespace GlassOS
{
    class CommandGenerator
    {
    public:

        static bool Initialize();

        static std::string Generate(
            const std::string& request);

        static bool CanGenerate(
            const std::string& request);

        static void Reset();
    };
}
