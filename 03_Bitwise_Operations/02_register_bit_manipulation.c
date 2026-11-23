#include <stdio.h>

int main()
{
    unsigned int reg = 0;

    reg = reg | (1u << 1);  // Set bit 1
    printf("After setting bit 1: %u\n", reg);

    reg = reg | (1u << 4);  // Set bit 4
    printf("After setting bit 4: %u\n", reg);

    reg = reg & ~(1u << 1); // Clear bit 1
    printf("After clearing bit 1: %u\n", reg);

    reg = reg ^ (1u << 4);  // Toggle bit 4
    printf("After toggling bit 4: %u\n", reg);

    if (reg & (1u << 4))
        printf("Bit 4 is SET\n");
    else
        printf("Bit 4 is CLEAR\n");

    return 0;
}
