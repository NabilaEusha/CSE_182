// Write a C program to print Fibonacci series up to n terms.
#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 1, num3, i, n;
    printf("\nEnter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series till %d: %d, %d, ", n, num1, num2); // printing 0 and 1
    for (i = 2; i < n; ++i)                                   // loop starts from 2 because 0 and 1 are already printed

    {
        num3 = num1 + num2;
        printf("%d, ", num3);
        num1 = num2;
        num2 = num3;
    }

    return 0;
}
