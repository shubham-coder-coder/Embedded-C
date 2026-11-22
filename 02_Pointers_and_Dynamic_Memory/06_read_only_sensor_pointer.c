#include <stdio.h>

int main(void)
{
    int voltage = 12;
    const int *ptr = &voltage;

    printf("Original voltage: %d\n", *ptr);

    voltage = 24;

    printf("Updated voltage: %d\n", *ptr);

    return 0;
}
