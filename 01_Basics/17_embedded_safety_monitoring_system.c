#include <stdio.h>

#define MAX_VOLTAGE 12.0

int main()
{
    const float reference_voltage = 5.0;
    volatile float battery_voltage = 13.5;

    printf("%.1f\n%.1f\n%.1f\n", MAX_VOLTAGE, reference_voltage, battery_voltage);

    if (battery_voltage > MAX_VOLTAGE)
        printf("OVER VOLTAGE ALERT");
    else
        printf("VOLTAGE NORMAL");

    return 0;
}
