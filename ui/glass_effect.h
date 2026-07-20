#pragma once

namespace GlassOS
{
    class GlassEffect
    {
    public:
        static bool Initialize();

        static bool EnableBlur();

        static bool DisableBlur();

        static bool SetBlurRadius(float radius);

        static bool SetOpacity(float opacity);

        static bool SetCornerRadius(float radius);

        static bool SetShadow(bool enabled);

        static bool SetGlow(bool enabled);

    private:
        static float blurRadius;
        static float opacity;
        static float cornerRadius;

        static bool shadowEnabled;
        static bool glowEnabled;
    };
}
