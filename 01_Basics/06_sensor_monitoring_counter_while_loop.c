#include <stdio.h>

int main()
{
    int count = 0;

    while (count < 10)
    {
        count++;
        printf("sensor value: %d\n", count);
    }

    return 0;
}
