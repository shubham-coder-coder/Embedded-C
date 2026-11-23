#include <stdio.h>

void turn_on_led(void)
{
    printf("LED ON\n");
}

int main()
{
    void (*ptr)(void) = turn_on_led;

    ptr();

    return 0;
}
