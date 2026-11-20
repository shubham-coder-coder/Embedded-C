#include <stdio.h>

struct SensorData
{
    int sensor_id;
    float volt, cur;
    char status;
};

int main()
{
    struct SensorData s1;

    s1.sensor_id = 201;
    s1.volt = 3.3;
    s1.cur = 1.5;
    s1.status = 'A';

    float power = s1.volt * s1.cur;

    printf("id: %d\n", s1.sensor_id);
    printf("volt: %f\ncurrent: %f\n", s1.volt, s1.cur);
    printf("status: %c\n", s1.status);
    printf("power: %2f\n", power);

    return 0;
}
