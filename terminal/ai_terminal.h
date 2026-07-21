#pragma once

#include <string>

namespace GlassOS
{
    class AITerminal
    {
    public:
        static bool Initialize();

        static bool Start();

        static bool Stop();

        static bool ProcessPrompt(
            const std::string& prompt);

    private:
        static bool DetectCommandCreation(
            const std::string& prompt);

        static bool ExecuteNaturalTask(
            const std::string& prompt);

        static bool AskToSaveCommand(
            const std::string& task);
    };
}
