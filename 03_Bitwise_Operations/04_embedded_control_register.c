#include <stdio.h>

int main()
{
    unsigned int reg = 0;

    reg |= (1u << 0); // Enable LED
    reg |= (1u << 1); // Enable motor
    reg |= (1u << 2); // Enable sensor

    printf("Register value: %u\n", reg);

    reg &= ~(1u << 1); // Disable motor
    reg |= (1u << 3);  // Enable buzzer

    printf("Final register value: %u\n", reg);

    if (reg & (1u << 2))
        printf("Sensor is enabled\n");
    else
        printf("Sensor is disabled\n");

    return 0;
}
