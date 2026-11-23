#include <stdio.h>
#include "led.h"

void turn_on_led(void)
{
    printf("LED ON\n");
    printf("LED pin: %d\n", LED_PIN);
}

int main()
{
    turn_on_led();

    return 0;
}
