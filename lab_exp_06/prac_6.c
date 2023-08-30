// Write a C Program to find the sum of n numbers using array.
#include <stdio.h>

int main()
{
    int a[20], i, n, sum = 0;
    printf("How many numbers do you want to input(1-20)? \n");
    scanf("%d", &n);
    printf("Enter some integers: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    printf("Sum of the array is: %d ", sum);
    return 0;
}