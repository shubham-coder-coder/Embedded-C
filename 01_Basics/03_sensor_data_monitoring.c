#include <stdio.h>

int main()
{
    int id = 205;
    float vol = 3.3;
    float current = 1.5;
    char dev_status = 'A';

    printf("Device ID: %d\n", id);
    printf("Voltage: %.1f V\n", vol);
    printf("Current: %.1f A\n", current);
    printf("Device Status: %c\n", dev_status);

    return 0;
}
