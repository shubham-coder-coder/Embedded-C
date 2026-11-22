#include <stdio.h>

int main(void)
{
    int readings[] = {25, 30, 35, 40, 45};
    int *ptr = readings;

    printf("First reading: %d\n", *ptr);
    printf("Second reading: %d\n", *(ptr + 1));
    printf("Third reading: %d\n", *(ptr + 2));
    printf("Fifth reading: %d\n", *(ptr + 4));

    return 0;
}
