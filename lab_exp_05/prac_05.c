// Write a C program to print all Prime numbers between 1 to n.
#include <stdio.h>

int main()
{
    int i, j, f, m, end;
    // f= flag variable
    printf("\nFind prime numbers between 1 to : ");
    scanf("%d", &end);

    printf("All prime numbers between 1 to %d are:\n", end);

    for (i = 2; i <= end; i++)
    {
        m = i; // assigning i to m
        f = 0;
        for (j = 2; j < m; j++)
        {
            if (m % j == 0)
            {
                f = 1;
                break;
            }
        }

        if (f == 0)
        {
            printf("%d,\t", i);
        }
    }
    return 0;
}
