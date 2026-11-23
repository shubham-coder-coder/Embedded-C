#include <stdio.h>

int main()
{
    float input_voltage = 2.5f;
    float reference_voltage = 3.3f;
    float adc_value = (input_voltage / reference_voltage) * 4095.0f;

    printf("Input voltage: %.2f V\n", input_voltage);
    printf("ADC value: %.2f\n", adc_value);

    return 0;
}
