#include <stdio.h>

int check_temperature(float temp)
{
    if (temp > 40)
        return 1;
    else
        return 0;
}

int main()
{
    int temp = 40;
    int status;

    status = check_temperature(temp);

    if (status == 1)
        printf("HIGH TEMPERATURE ALERT");
    else
        printf("TEMPERATURE NORMAL");

    return 0;
}
