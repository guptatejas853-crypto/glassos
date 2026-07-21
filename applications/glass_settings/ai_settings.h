#pragma once

#include <string>

namespace GlassOS
{
    class AISettings
    {
    public:
        static bool Initialize();

        static bool EnableAI();

        static bool DisableAI();

        static bool IsAIEnabled();

        static bool SetModel(
            const std::string& model);

        static std::string GetModel();

        static bool SetAssistantName(
            const std::string& name);

        static std::string GetAssistantName();

    private:
        static bool enabled;

        static std::string model;

        static std::string assistantName;
    };
}
