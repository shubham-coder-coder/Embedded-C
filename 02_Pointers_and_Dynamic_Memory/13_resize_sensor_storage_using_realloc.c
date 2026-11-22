#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr = malloc(3 * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    int arr[] = {10, 20, 30};

    for (int i = 0; i < 3; i++)
    {
        *(ptr + i) = *(arr + i);
    }

    int *new_ptr = realloc(ptr, 5 * sizeof(int));

    if (new_ptr == NULL)
    {
        printf("Reallocation failed\n");
        free(ptr);
        ptr = NULL;
        return 1;
    }

    ptr = new_ptr;

    *(ptr + 3) = 40;
    *(ptr + 4) = 50;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(ptr + i));
    }

    free(ptr);
    ptr = NULL;

    if (ptr == NULL)
    {
        printf("Memory is freed now\n");
    }

    return 0;
}
