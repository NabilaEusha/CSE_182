//Write a C program to check whether a number is even or odd using conditional/ternary operator.

#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number \n");
    scanf("%d", &a);

    (a%2==0) ? printf("Even= %d ", a) : printf("Odd= %d", a);
    return 0;
}