#include <stdio.h>

int main()
{
    unsigned int duty_cycle = 75;

    if (duty_cycle == 0)
        printf("LED OFF\n");
    else if (duty_cycle == 100)
        printf("LED fully ON\n");
    else if (duty_cycle < 100)
        printf("LED brightness: %u%%\n", duty_cycle);
    else
        printf("Invalid duty cycle\n");

    return 0;
}
