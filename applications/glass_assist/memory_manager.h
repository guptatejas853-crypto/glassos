#pragma once

#include <string>
#include <vector>

namespace GlassOS
{
    class MemoryManager
    {
    public:

        static bool Initialize();

        static void Add(
            const std::string& message);

        static std::vector<std::string> History();

    private:

        static std::vector<std::string> messages;
    };
}
