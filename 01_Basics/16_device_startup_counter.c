#include <stdio.h>

void device_startup()
{
    static int startup_count = 0;

    startup_count++;

    printf("Device Startup: %d\n", startup_count);
}

int main()
{
    device_startup();
    device_startup();
    device_startup();
    device_startup();
    device_startup();

    return 0;
}
