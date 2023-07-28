// Write a C program to calculate sum of digits of any number.
#include <stdio.h>

int main()
{
    int n, sum = 0, reminder;
    printf("Enter a number : ");
    scanf("%d", &n);
    while (n != 0)
    {
        reminder = n % 10;
        sum = sum + reminder;
        n = n / 10;
    }
    printf("Total sum of digits of number is %d\n", sum);
    return 0;
}