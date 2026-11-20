#include <stdio.h>

typedef struct
{
    int device_id;
    float voltage;
    char device_status;
} DeviceConfig;

int main()
{
    DeviceConfig s1;

    s1.device_id = 301;
    s1.voltage = 5.0;
    s1.device_status = 'A';

    printf("%d\n%.1f\n%c\n", s1.device_id, s1.voltage, s1.device_status);

    return 0;
}
