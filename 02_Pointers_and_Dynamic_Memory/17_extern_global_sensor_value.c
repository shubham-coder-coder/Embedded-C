#include <stdio.h>

int sensor_value = 75;

void display_sensor()
{
    extern int sensor_value;
    printf("%d\n", sensor_value);
}

int main()
{
    display_sensor();
    return 0;
}
