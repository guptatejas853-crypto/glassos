#pragma once

namespace GlassOS
{
    class Kernel
    {
    public:
        static bool Initialize();

        static bool InitializeMemory();

        static bool InitializeProcessManager();

        static bool InitializeSecurity();

        static bool InitializeIPC();

        static bool Shutdown();
    };
}
