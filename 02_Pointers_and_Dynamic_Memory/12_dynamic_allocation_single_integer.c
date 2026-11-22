#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr = malloc(sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Memory allocation successful\n");

    *ptr = 75;
    printf("Value: %d\n", *ptr);

    free(ptr);
    ptr = NULL;

    if (ptr == NULL)
    {
        printf("Memory is freed and pointer is NULL\n");
    }

    return 0;
}
