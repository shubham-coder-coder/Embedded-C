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

    *(readings + 0) = 100;
    *(readings + 1) = 150;
    *(readings + 2) = 200;
    *(readings + 3) = 250;
    *(readings + 4) = 300;

    int total = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Reading %d: %d\n", i + 1, *(readings + i));
        total += *(readings + i);
    }

    printf("Total: %d\n", total);

    free(readings);
    readings = NULL;

    return 0;
}
