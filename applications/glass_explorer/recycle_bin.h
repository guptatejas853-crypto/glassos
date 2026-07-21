#pragma once

#include <string>
#include <vector>

namespace GlassOS
{
    struct RecycleItem
    {
        std::string originalPath;
        std::string recyclePath;
        std::string deletedTime;
    };

    class RecycleBin
    {
    public:
        static bool Initialize();

        static bool Delete(
            const std::string& path);

        static bool Restore(
            const std::string& recyclePath);

        static bool Empty();

        static const std::vector<RecycleItem>&
            GetItems();

    private:
        static std::vector<RecycleItem> items;
    };
}
