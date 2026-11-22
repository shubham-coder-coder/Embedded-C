#include <stdio.h>

int main(void)
{
    int temperature = 30;
    int *const ptr = &temperature;

    printf("Original temperature: %d\n", *ptr);

    *ptr = 45;

    printf("Updated temperature: %d\n", temperature);

    return 0;
}
