#include <stdio.h>

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int (*ptr)(int, int) = multiply;
    int result = ptr(5, 4);

    printf("Result: %d\n", result);

    return 0;
}
