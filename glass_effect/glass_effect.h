#pragma once

namespace GlassOS
{
    class GlassEffect
    {
    public:
        static bool Initialize();

        static void ApplyBlur();
        static void ApplyTransparency();
        static void ApplyRoundedCorners();
    };
}
