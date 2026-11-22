#include <stdio.h>

int main(void)
{
    char device_name[] = "STM32";
    char *ptr = device_name;
    int count = 0;

    printf("Microcontroller name: ");

    while (*ptr != '\0')
    {
        printf("%c\n", *ptr);
        ptr++;
        count++;
    }

    printf("Total characters: %d\n", count);

    return 0;
}
