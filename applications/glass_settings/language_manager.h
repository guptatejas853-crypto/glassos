#pragma once

#include <string>

namespace GlassOS
{
    class LanguageManager
    {
    public:
        static bool Initialize();

        static bool SetLanguage(
            const std::string& language);

        static std::string GetLanguage();

        static bool AddLanguage(
            const std::string& language);

        static bool IsSupported(
            const std::string& language);

    private:
        static std::string currentLanguage;
    };
}
