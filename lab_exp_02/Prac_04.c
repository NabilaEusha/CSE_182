// Write a C program to enter temperature in °Celsius and convert it into °Fahrenheit.
#include <stdio.h>

int main()
{
    float c, f;
    printf("Enter temperature in Celsius \n");
    scanf("%f", &c);
    f = (c * 9) / 5 + 32;
    printf("The temperature in fahrenheit scale is %f", f);

    return 0;
}