// Write a C program to enter any number and print its prime factors.
#include <stdio.h>

int main()
{
    int n, i, j, count;
    printf("\nEnter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) // 1 to n(input) loop
    {
        if (n % i == 0) //checking whether factor or not
        {
            count = 0;
            for (j = 1; j <= i; j++) // checking whether that (i) factor is prime or not
            {
                if (i % j == 0)
                {
                    count++;
                }
            }
            if (count==2)
            {
                printf("%d,\t", i);
            }
        }
    }

    return 0;
}