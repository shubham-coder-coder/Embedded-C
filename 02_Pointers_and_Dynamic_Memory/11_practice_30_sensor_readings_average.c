#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *readings = malloc(5 * sizeof(int));

    if (readings == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    *(readings + 0) = 25;
    *(readings + 1) = 30;
    *(readings + 2) = 35;
    *(readings + 3) = 40;
    *(readings + 4) = 45;

    int total = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Reading %d: %d\n", i + 1, *(readings + i));
        total += *(readings + i);
    }

    float average = total / 5.0f;

    printf("Total: %d\n", total);
    printf("Average: %.2f\n", average);

    free(readings);
    readings = NULL;

    return 0;
}
