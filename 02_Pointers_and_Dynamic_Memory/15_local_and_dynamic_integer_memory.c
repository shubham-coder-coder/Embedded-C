#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int temperature = 30;
    int *ptr = malloc(sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    *ptr = 45;

    printf("Local variable: %d\n", temperature);
    printf("Dynamically allocated value: %d\n", *ptr);

    free(ptr);
    ptr = NULL;

    return 0;
}
