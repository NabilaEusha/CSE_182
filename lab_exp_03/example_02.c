// Write a C program to check whether a given integer number is Even or Odd.

#include <stdio.h>

int main()
{
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d is an even integer\n", a);
    }
    else
    {
        printf("%d is an odd integer\n", a);
    }
    return 0;
}