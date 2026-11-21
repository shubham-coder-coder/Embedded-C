#include <stdio.h>

int main()
{
    unsigned char reg = 0x00;

    reg = reg | (1 << 0);
    reg = reg | (1 << 3);

    printf("register value in hexadecimal 0x%02X\n", reg);

    reg = reg & ~(1 << 0);
    printf("updated register value 0x%02X\n", reg);

    reg = reg ^ (1 << 3);
    printf("final register value 0x%02X\n", reg);

    return 0;
}
