#include <stdio.h>

int main()
{
    float temp = 40;

    if (temp > 40)
        printf("high temperature");
    else if (temp >= 25 && temp <= 40)
        printf("normal temperature");
    else
        printf("low temperature");

    return 0;
}
