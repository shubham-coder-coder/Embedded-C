#include <stdio.h>

#define DOUBLE(x) ((x) * 2)

int main()
{
    int sensor_value = 25;

    printf("Doubled sensor value: %d\n", DOUBLE(sensor_value));

    return 0;
}
