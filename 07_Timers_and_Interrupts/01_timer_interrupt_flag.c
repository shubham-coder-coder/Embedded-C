#include <stdio.h>

volatile int interrupt_flag = 0;

/* Simulates an ISR setting a flag when an interrupt occurs. */
void timer_ISR(void)
{
    interrupt_flag = 1;
}

int main()
{
    timer_ISR();

    if (interrupt_flag == 1)
        printf("Timer interrupt detected\n");

    return 0;
}
