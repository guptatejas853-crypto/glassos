#pragma once

#include <string>
#include <vector>

namespace GlassOS
{
    class SearchEngine
    {
    public:
        static bool Initialize();

        static std::vector<std::string> Search(
            const std::string& directory,
            const std::string& query);

        static void ClearResults();

        static const std::vector<std::string>&
            GetResults();

    private:
        static std::vector<std::string> results;
    };
}
