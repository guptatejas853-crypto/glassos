#pragma once

namespace GlassOS
{

class WindowManager
{
public:
    static bool Initialize();

    static bool Start();

    static bool Refresh();

    static bool Lock();

    static bool Shutdown();

    static bool RegisterWindow(int id);

    static bool CloseWindow(int id);

    static int WindowCount();
};

}
