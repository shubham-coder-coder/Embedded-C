#include <stdio.h>

int main()
{
    unsigned int sensor = 12;
    unsigned int mask = 10;

    printf("AND operation: %u\n", sensor & mask);
    printf("OR operation: %u\n", sensor | mask);
    printf("XOR operation: %u\n", sensor ^ mask);
    printf("Left shift operation: %u\n", sensor << 2);
    printf("Right shift operation: %u\n", sensor >> 1);

    return 0;
}
