#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *readings = malloc(3 * sizeof(int));

    if (readings == NULL)
    {
        printf("Initial memory allocation failed.\n");
        return 1;
    }

    *(readings + 0) = 10;
    *(readings + 1) = 20;
    *(readings + 2) = 30;

    int *temp = realloc(readings, 5 * sizeof(int));

    if (temp == NULL)
    {
        printf("Memory reallocation failed.\n");
        free(readings);
        readings = NULL;
        return 1;
    }

    readings = temp;

    *(readings + 3) = 40;
    *(readings + 4) = 50;

    for (int i = 0; i < 5; i++)
    {
        printf("Reading %d: %d\n", i + 1, *(readings + i));
    }

    free(readings);
    readings = NULL;

    return 0;
}
