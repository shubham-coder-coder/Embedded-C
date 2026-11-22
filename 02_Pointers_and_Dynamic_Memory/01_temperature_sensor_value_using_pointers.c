#include <stdio.h>

int main(void)
{
    int temperature = 35;
    int *ptr = &temperature;

    printf("Original temperature: %d\n", temperature);
    printf("Memory address: %p\n", (void *)&temperature);
    printf("Temperature using pointer: %d\n", *ptr);

    *ptr = 45;

    printf("Updated original temperature: %d\n", temperature);

    return 0;
}
