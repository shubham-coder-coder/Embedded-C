#include <stdio.h>
#include <string.h>

int main()
{
    char device_name[] = "ESP32";
    char device_type[] = "Microcontroller";

    printf("%s\n%s\n", device_name, device_type);

    int len = strlen(device_name);
    int len1 = strlen(device_type);

    printf("%d\n%d", len, len1);

    if (strcmp(device_name, device_type) == 0)
        printf("\nStrings are equal");
    else
        printf("\nStrings are different");

    return 0;
}
