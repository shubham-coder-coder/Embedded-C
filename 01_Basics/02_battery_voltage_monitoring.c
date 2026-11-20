#include <stdio.h>

int main()
{
    float battery_volt = 12.5;
    float battery_cur = 2.0;
    float power = battery_volt * battery_cur;
    float remaining_voltage = battery_volt - 1.5;

    printf("Voltage: %f V\n", battery_volt);
    printf("Current: %f A\n", battery_cur);
    printf("Power: %f W\n", power);
    printf("Remaining Voltage: %f V\n", remaining_voltage);

    return 0;
}
