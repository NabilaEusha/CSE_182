// Write a C program to enter any number and calculate its factorial.
#include <stdio.h>

int main()
{
    int i, n, factorial = 1;
    printf("Enter the number of n: ");
    scanf("%d", &n);
    i = n;
    while (n > 0)
    {
        factorial = factorial * n;
        n--;
    }
    printf("Factorial of %d is %d\n", i, factorial);

    return 0;
}