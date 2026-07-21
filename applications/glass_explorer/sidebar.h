#pragma once

#include <string>
#include <vector>

namespace GlassOS
{
    class Sidebar
    {
    public:
        static bool Initialize();

        static bool LoadDefaultItems();

        static const std::vector<std::string>& GetItems();

    private:
        static std::vector<std::string> items;
    };
}
