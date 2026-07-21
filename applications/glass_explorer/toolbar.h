#pragma once

#include <string>
#include <vector>

namespace GlassOS
{
    struct ToolbarButton
    {
        std::string id;
        std::string label;
    };

    class Toolbar
    {
    public:
        static bool Initialize();

        static bool LoadDefaultButtons();

        static const std::vector<ToolbarButton>& GetButtons();

    private:
        static std::vector<ToolbarButton> buttons;
    };
}
