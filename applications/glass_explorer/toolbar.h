#pragma once

namespace GlassOS
{
    class Toolbar
    {
    public:

        static bool Initialize();

        static void Back();

        static void Forward();

        static void Refresh();

    private:

        static bool ready;
    };
}
