#pragma once

#include <string>
#include <vector>

namespace GlassOS
{
    class SearchEngine
    {
    public:

        static std::vector<std::string>
        Search(
            const std::string& path,
            const std::string& keyword);
    };
}
