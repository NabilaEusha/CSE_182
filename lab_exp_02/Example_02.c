//A C program to find the maximum between two numbers using conditional operator.

#include <stdio.h>

int main()
{
    int a, b, max;
    printf("Enter two number \n");
    scanf("%d %d", &a, &b);

    (a > b) ? printf("Max= %d ", a) : printf("Max= %d", b);
    return 0;
    }