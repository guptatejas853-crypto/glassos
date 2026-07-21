#pragma once

namespace GlassOS
{
    class TouchpadManager
    {
    public:
        static bool Initialize();

        static bool EnableTouchpad();

        static bool DisableTouchpad();

        static bool IsEnabled();

        static bool EnableTapToClick();

        static bool DisableTapToClick();

        static bool IsTapToClickEnabled();

        static bool SetScrollDirection(
            bool natural);

        static bool IsNaturalScroll();

    private:
        static bool enabled;

        static bool tapToClick;

        static bool naturalScroll;
    };
}
