// Write a C program to enter any number and calculate its factorial.
#include <stdio.h>

int main()
{
    int n, factorial = 1;
    printf("Enter the number of n: ");
    scanf("%d", &n);

    while (n > 0)
    {
        factorial = factorial * n;
        n--;
    }
    printf("Factorial of %d is %d\n", n, factorial);

    return 0;
}