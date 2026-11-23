#include <stdio.h>

int main()
{
    unsigned int reg = 15;
    unsigned int mask = (1u << 2);

    printf("Original value: %u\n", reg);

    reg = reg & ~mask;
    printf("Modified value: %u\n", reg);

    if (reg & mask)
        printf("Bit 2 is SET\n");
    else
        printf("Bit 2 is CLEAR\n");

    return 0;
}
