#include <stdio.h>

int main()
{
    const int flash_data = 500;
    int ram_data = 100;
    volatile unsigned int gpio_register = 0;

    ram_data = 200;
    gpio_register = 1;

    printf("Flash data: %d\n", flash_data);
    printf("RAM data: %d\n", ram_data);
    printf("GPIO register: %u\n", gpio_register);

    return 0;
}
