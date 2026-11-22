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
        printf("%d\n", *(ptr + i));
    }

    free(ptr);
    ptr = NULL;

    if (ptr == NULL)
    {
        printf("Now pointer is NULL\n");
    }

    return 0;
}
