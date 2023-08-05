// Write a C program to check whether a number is Prime number or not.
#include <stdio.h>

int main()
{
    int n, i, count = 0;
    printf("\nEnter any number n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;// to count how many times n is divisible by i
        }
    }

    if (count == 2)
    {
        printf("%d is a Prime number. ",n);
    }
    else
    {
        printf("%d is not a Prime number. ",n);
    }
    return 0;
}