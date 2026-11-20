#include <stdio.h>

int main()
{
    int total = 0;
    int arr[5] = {28, 32, 35, 41, 30};

    for (int i = 0; i < 5; i++)
    {
        printf("Temperature %d \n", arr[i]);
        total = total + arr[i];
    }

    printf("Total: %d \n", total);

    float avg = (float)total / 5;
    printf("Avg: %f", avg);

    return 0;
}
