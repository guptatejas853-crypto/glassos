#pragma once

#include <string>
#include <vector>

namespace GlassOS
{
    class RecentDocuments
    {
    public:
        static bool Initialize();

        static bool Add(
            const std::string& filePath);

        static bool Remove(
            const std::string& filePath);

        static void Clear();

        static const std::vector<std::string>&
            GetList();

    private:
        static std::vector<std::string> documents;
    };
}
