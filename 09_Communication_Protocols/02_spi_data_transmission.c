#include <stdio.h>

int main()
{
    unsigned char data = 0x5A;
    int clock_speed = 1000000;

    printf("SPI Clock Speed: %d Hz\n", clock_speed);
    printf("Transmitted Data: 0x%X\n", data);

    return 0;
}
