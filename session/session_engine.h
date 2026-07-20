#pragma once

namespace GlassOS
{
    class SessionEngine
    {
    public:
        static bool Initialize();

        static bool Start();

        static bool Shutdown();

        static bool Recover();

        static bool Save();

        static bool AutoSave();
    };
}
