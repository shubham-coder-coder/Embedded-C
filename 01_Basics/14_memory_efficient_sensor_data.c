#include <stdio.h>

union SensorValue
{
    int temp;
    float vol;
    char status;
};

int main()
{
    union SensorValue s1;

    s1.temp = 35;
    printf("temperature: %d\n", s1.temp);

    s1.vol = 3.3;
    printf("voltage: %.1f\n", s1.vol);

    s1.status = 'A';
    printf("status: %c\n", s1.status);

    return 0;
}
