#pragma once

namespace GlassOS
{
    class PowerManager
    {
    public:
        static bool Initialize();

        static bool Sleep();

        static bool Shutdown();

        static bool Restart();

        static bool Hibernate();

        static bool IsSleeping();

    private:
        static bool sleeping;
    };
}
