// Write a C program to find maximum between three numbers.

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers \n");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("Max=%d\n", a);
    }
    else if (b > c)
    {
        printf("Max=%d\n", b);
    }
    else
    {
        printf("Max=%d\n", c);
    }
    return 0;
}