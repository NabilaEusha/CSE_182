// Write a C program to copy all elements from an array to another array.
#include <stdio.h>

int main()
{
    int a[20], b[20], i, n;
    printf("How many numbers do you want to input(1-20)? \n");
    scanf("%d", &n);
    printf("Enter some integers: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nElements of the main array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("\n\nElements of the new array: ");
    for (i = 0; i < n; i++)
    {
        b[i] = a[i];
        printf("%d, ", b[i]);
    }

    return 0;
}