#pragma once

#include <string>
#include <vector>

namespace GlassOS
{
    class CommandSuggester
    {
    public:
        static bool Initialize();

        static std::vector<std::string> Suggest(
            const std::string& command);

        static void RegisterAlias(
            const std::string& alias,
            const std::string& command);

    private:
        static int EditDistance(
            const std::string& first,
            const std::string& second);

        static std::vector<std::string> commands;
    };
}
