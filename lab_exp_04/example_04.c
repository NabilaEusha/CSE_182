// Write a C Program to add numbers until the user enters zero .
#include <stdio.h>

int main()
{
    double i, sum = 0;
    do
    {
        printf("Enter a number\n");
        scanf("%lf", &i);
        sum += i;
    } while (i != 0);
    printf("Sum=%.2f\n", sum);
    return 0;
}