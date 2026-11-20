#include <stdio.h>

int main()
{
    int sensor_value = 250;
    int *ptr = &sensor_value;

    printf("sensor value: %d \n", sensor_value);
    printf("sensor value using the pointer: %d \n", *ptr);

    *ptr = 300;

    printf("updated value %d \n", sensor_value);

    return 0;
}
