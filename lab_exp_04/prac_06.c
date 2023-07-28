// Write a C program to find first and last digit of any number.
#include <stdio.h>

int main()
{
    int n, firstDigit, lastDigit;
    printf("Enter a number : ");
    scanf("%d", &n);
    lastDigit = n % 10;
    while (n > 10)
    {
        n /= 10;
    }

    firstDigit = n;
    printf("First digit = %d \nLast digit = %d\n", firstDigit, lastDigit);

    return 0;
}