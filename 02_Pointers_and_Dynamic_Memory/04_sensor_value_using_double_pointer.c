#include <stdio.h>

int main(void)
{
    int temperature = 30;
    int *ptr = &temperature;
    int **pptr = &ptr;

    printf("Original temperature: %d\n", temperature);
    printf("Temperature using double pointer: %d\n", **pptr);

    **pptr = 50;

    printf("Updated temperature: %d\n", temperature);

    return 0;
}
