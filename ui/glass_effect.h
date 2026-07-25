#pragma once

namespace GlassOS
{

class GlassEffect
{
public:
    // Initialization
    static bool Initialize();

    // Blur
    static bool EnableBlur();
    static bool DisableBlur();
    static bool SetBlurRadius(float radius);
    static float GetBlurRadius();

    // Opacity
    static bool SetOpacity(float value);
    static float GetOpacity();

    // Rounded Corners
    static bool SetCornerRadius(float radius);
    static float GetCornerRadius();

    // Shadow
    static bool SetShadow(bool enabled);
    static bool ShadowEnabled();

    // Glow
    static bool SetGlow(bool enabled);
    static bool GlowEnabled();

private:
    static float blurRadius;
    static float opacity;
    static float cornerRadius;

    static bool shadowEnabled;
    static bool glowEnabled;
};

} // namespace GlassOS
