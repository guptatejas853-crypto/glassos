#include "search_engine.h"

#include <filesystem>

using namespace GlassOS;

namespace fs = std::filesystem;

std::vector<std::string>
SearchEngine::results;

bool SearchEngine::Initialize()
{
    results.clear();
    return true;
}

std::vector<std::string>
SearchEngine::Search(
    const std::string& directory,
    const std::string& query)
{
    results.clear();

    if(!fs::exists(directory))
        return results;

    for(const auto& entry :
        fs::recursive_directory_iterator(directory))
    {
        std::string name =
            entry.path().filename().string();

        if(name.find(query) != std::string::npos)
        {
            results.push_back(
                entry.path().string());
        }
    }

    return results;
}

void SearchEngine::ClearResults()
{
    results.clear();
}

const std::vector<std::string>&
SearchEngine::GetResults()
{
    return results;
}
