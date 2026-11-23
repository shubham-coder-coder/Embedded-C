#include <stdio.h>

int main()
{
    unsigned int register_A = 15;
    unsigned int register_B = 25;
    unsigned int result_register;

    result_register = register_A + register_B;

    printf("Register A: %u\n", register_A);
    printf("Register B: %u\n", register_B);
    printf("Result Register: %u\n", result_register);

    return 0;
}
