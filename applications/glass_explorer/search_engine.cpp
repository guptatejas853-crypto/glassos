#include "search_engine.h"

#include <filesystem>

using namespace GlassOS;

namespace fs = std::filesystem;

std::vector<std::string>
SearchEngine::Search(
    const std::string& path,
    const std::string& keyword)
{
    std::vector<std::string> results;

    if(!fs::exists(path))
        return results;

    for(const auto& entry :
        fs::recursive_directory_iterator(path))
    {
        auto name =
            entry.path().filename().string();

        if(name.find(keyword) != std::string::npos)
        {
            results.push_back(
                entry.path().string());
        }
    }

    return results;
}
