#pragma once

namespace GlassOS
{
    class DriverManager
    {
    public:
        static bool Initialize();

        static bool LoadDisplayDriver();

        static bool LoadKeyboardDriver();

        static bool LoadMouseDriver();

        static bool LoadStorageDriver();

        static bool LoadNetworkDriver();

        static bool Shutdown();
    };
}
