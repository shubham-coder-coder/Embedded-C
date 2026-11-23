#include <stdio.h>

#define DEBUG

int main()
{
#ifdef DEBUG
    printf("Debug mode ON\n");
#else
    printf("Debug mode OFF\n");
#endif

    printf("Embedded system running\n");

    return 0;
}
