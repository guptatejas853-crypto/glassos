#pragma once

#include <string>

namespace GlassOS
{
    class CommandTrainer
    {
    public:

        static bool Initialize();

        static void Learn(
            const std::string& command);

        static void LearnTransition(
            const std::string& previous,
            const std::string& current);

        static std::string PredictNext(
            const std::string& current);

        static void Reset();
    };
}
