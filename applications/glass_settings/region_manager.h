#pragma once

#include <string>

namespace GlassOS
{
    class RegionManager
    {
    public:
        static bool Initialize();

        static bool SetCountry(
            const std::string& country);

        static std::string GetCountry();

        static bool SetRegion(
            const std::string& region);

        static std::string GetRegion();

        static bool SetCurrency(
            const std::string& currency);

        static std::string GetCurrency();

    private:
        static std::string country;

        static std::string region;

        static std::string currency;
    };
}
