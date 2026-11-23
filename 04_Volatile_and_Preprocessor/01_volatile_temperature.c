#include <stdio.h>

int main()
{
    volatile int temperature = 25;

    printf("Initial temperature: %d\n", temperature);

    temperature = 35;
    printf("Updated temperature: %d\n", temperature);

    return 0;
}

/*
volatile is useful in embedded systems because it tells the compiler
that a variable can change unexpectedly, such as through hardware
registers or interrupts, so it must perform the required memory reads.
*/
