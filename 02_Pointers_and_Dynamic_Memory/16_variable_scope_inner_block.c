#include <stdio.h>

int main(void)
{
    int sensor = 25;

    {
        int voltage = 12;
        printf("Sensor: %d, Voltage: %d\n", sensor, voltage);
    }

    printf("Sensor value: %d\n", sensor);

    return 0;
}
