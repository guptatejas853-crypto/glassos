#pragma once

#include <string>

namespace GlassOS
{
    class StatusBar
    {
    public:
        static bool Initialize();

        static void SetLine(
            int line);

        static void SetColumn(
            int column);

        static void SetModified(
            bool modified);

        static void SetMessage(
            const std::string& message);

        static int CurrentLine();

        static int CurrentColumn();

        static bool IsModified();

        static std::string Message();

    private:
        static int currentLine;
        static int currentColumn;
        static bool documentModified;
        static std::string statusMessage;
    };
}
