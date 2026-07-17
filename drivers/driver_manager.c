#include <stdio.h>

#include "driver_manager.h"
#include "keyboard.h"
#include "display.h"
#include "mouse.h"
#include "storage.h"
#include "network.h"

void driver_manager_init(void)
{
    printf("Initializing GlassOS Drivers...\n");

    keyboard_init();
    display_init();
    mouse_init();
    storage_init();
    network_init();

    printf("All Drivers Initialized Successfully.\n");
}
