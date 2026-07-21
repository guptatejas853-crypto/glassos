#pragma once

namespace GlassOS
{
    class TerminalManager
    {
    public:
        static bool Initialize();

        static bool Start();

        static bool Shutdown();

        static bool OpenCommandTerminal();

        static bool OpenAITerminal();

    private:
        static bool commandMode;
    };
}
