#include <stdio.h>

int main(void)
{
    int sensor_value = 75;
    int *ptr = NULL;

    if (ptr == NULL)
    {
        printf("Pointer is NULL. It is not pointing to a variable.\n");
    }

    ptr = &sensor_value;

    if (ptr != NULL)
    {
        printf("Sensor value: %d\n", *ptr);
    }

    return 0;
}
