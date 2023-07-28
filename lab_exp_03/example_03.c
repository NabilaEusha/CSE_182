// Write a C program to relate the two integers using equal, greater or less symbol.
#include <stdio.h>

int main()
{
    int number1, number2;
    printf("Enter two numbers\n");
    scanf("%d %d", &number1, &number2);
    if (number1 == number2)
    {
        printf("Result: %d = %d", number1, number2);
    }
    else if (number1 > number2)
    {
        printf("Result: %d > %d", number1, number2);
    }
    else
    {
        printf("Result: %d < %d", number1, number2);
    }
    return 0;
}