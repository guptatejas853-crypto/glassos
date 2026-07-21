#pragma once

#include <string>

namespace GlassOS
{
    class AICommandManager
    {
    public:
        static bool Initialize();

        static bool SuggestCommand(
            const std::string& task);

        static bool SaveCommand(
            const std::string& command,
            const std::string& description);

        static bool CancelCommand();

    private:
        static std::string suggestedCommand;

        static std::string suggestedDescription;
    };
}
