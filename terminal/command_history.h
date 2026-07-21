#pragma once

#include <string>
#include <vector>

namespace GlassOS
{
    class CommandHistory
    {
    public:
        static bool Initialize();

        static void Add(
            const std::string& command);

        static std::string Previous();

        static std::string Next();

        static void Clear();

    private:
        static std::vector<std::string> history;

        static int currentIndex;
    };
}
