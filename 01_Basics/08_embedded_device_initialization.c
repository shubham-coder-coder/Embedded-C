#include <stdio.h>

int main()
{
    int attempt = 0;

    do
    {
        printf("Initializing Device...\n");
        attempt++;
    } while (attempt < 5);

    printf("Device Initialization Completed\n");

    return 0;
}
