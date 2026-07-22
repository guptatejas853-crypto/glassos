#pragma once

namespace GlassOS
{
    class QuickCenter
    {
    public:

        static bool Initialize();

        static void Show();

        static void Hide();

        static bool IsVisible();

    private:

        static bool visible;
    };
}
