#include <stdio.h>

int main(void)
{
    int temperature = 35;
    const int *const ptr = &temperature;

    printf("Temperature: %d\n", *ptr);
    printf("Memory address: %p\n", (void *)ptr);

    return 0;
}
