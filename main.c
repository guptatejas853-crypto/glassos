#include <stdio.h>
#include "kernel.h"

int main(void)
{
    printf("Starting GlassOS...\n");
    kernel_start();
    return 0;
}
