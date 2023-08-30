// Write a C program to print all negative elements in an array.
#include <stdio.h>

int main()
{
    int array[20], i, n;
    printf("How many numbers do you want to input(1-20)? \n");
    scanf("%d", &n);
    printf("Enter some integers: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Negative elements: ");
    for (i = 0; i < n; i++)
    {
        if (array[i] < 0)
        {
            printf("%d, ", array[i]);
        }
    }
    return 0;
}