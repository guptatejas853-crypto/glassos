#pragma once

#include <string>
#include <vector>

namespace GlassOS
{
    class CommandSimilarity
    {
    public:

        static bool Initialize();

        static int Distance(
            const std::string& left,
            const std::string& right);

        static std::vector<std::string>
        FindClosest(
            const std::string& input,
            const std::vector<std::string>& commands);
    };
}
