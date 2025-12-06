#include <stdio.h>
float fahrenheit(int celsius);
int main()
{
    int celsius;
    printf("Enter the temperature in celsius :");
    scanf("%d", &celsius);
    printf("The conversion is %f", fahrenheit(celsius));
    return 0;
}

float fahrenheit(int celsius)
{
    float result;
    result = celsius * (9.0 / 5.0) + 32.0;
    return result;
}
