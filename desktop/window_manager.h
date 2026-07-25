#pragma once

#include <string>
#include <vector>

namespace GlassOS
{

struct Window
{
    int id;
    std::string title;
    bool visible;
};

class WindowManager
{
public:
    static bool Initialize();

    static bool Start();

    static bool Refresh();

    static bool Lock();

    static bool Shutdown();

    static bool CreateWindow(int id, const std::string& title);

    static bool CloseWindow(int id);

    static Window* GetWindow(int id);

    static int WindowCount();

private:
    static std::vector<Window> windows;
};

}
