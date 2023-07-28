// Write a C program to check whether a number is negative, positive or zero.
#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a == 0)
    {
        printf("Your input is zero\n");
    }
    else if (a > 0)
    {
        printf("Your input is a positive number\n");
    }
    else
    {
        printf("Your input is a negative number\n");
    }
    return 0;
}