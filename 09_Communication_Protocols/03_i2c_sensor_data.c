#include <stdio.h>

int main()
{
    unsigned char device_address = 0x68;
    unsigned char sensor_data = 35;

    printf("Device Address: 0x%X\n", device_address);
    printf("Received Sensor Data: %u\n", sensor_data);

    return 0;
}
