#pragma once

namespace GlassOS
{
    class AnimationManager
    {
    public:
        static bool Initialize();

        static bool EnableAnimations();

        static bool DisableAnimations();

        static bool AreAnimationsEnabled();

        static bool SetAnimationSpeed(
            int speed);

        static int GetAnimationSpeed();

        static bool EnableBlurEffects();

        static bool DisableBlurEffects();

        static bool BlurEffectsEnabled();

    private:
        static bool animations;

        static bool blur;

        static int animationSpeed;
    };
}
