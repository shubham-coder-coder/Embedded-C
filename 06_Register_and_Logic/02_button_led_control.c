#include <stdio.h>

int main()
{
    int button_input = 0;
    int led_output = 0;

    if (button_input == 1)
        led_output = 1;
    else
        led_output = 0;

    printf("Button: %d\n", button_input);
    printf("LED: %d\n", led_output);

    return 0;
}
