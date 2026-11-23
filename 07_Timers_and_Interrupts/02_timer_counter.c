#include <stdio.h>

int main()
{
    unsigned int timer_count = 0;

    for (int i = 0; i < 5; i++)
    {
        timer_count++;
        printf("Timer counter: %u\n", timer_count);
    }

    if (timer_count == 5)
        printf("Timer completed\n");

    return 0;
}
