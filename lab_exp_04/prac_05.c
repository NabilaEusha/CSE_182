// Write a C program to count number of digits in any number.
#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("Enter the number of n: ");
    scanf("%d", &n);
    do
    {
        n = n / 10;
        count++;
    } while (n != 0);
    printf("Total number of digits= %d  ", count);
    return 0;
}