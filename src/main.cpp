#include "../core/system.h"

int main()
{
    if(!GlassOS::SystemInitialize())
        return -1;

    if(!GlassOS::SystemStart())
        return -1;

    GlassOS::SystemShutdown();

    return 0;
}
