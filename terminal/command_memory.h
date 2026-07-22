#pragma once

#include <string>
#include <unordered_map>

namespace GlassOS
{
    class CommandMemory
    {
    public:

        static bool Initialize();

        static void Record(
            const std::string& command);

        static int UsageCount(
            const std::string& command);

        static std::string MostUsed();

        static bool Forget(
            const std::string& command);

    private:

        static std::unordered_map<
            std::string,
            int> usage;
    };
}
