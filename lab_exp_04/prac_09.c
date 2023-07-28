// Write a C program to enter any number and print all factors of the number.
#include <stdio.h>

int main()
{
    int i, num;
    printf("Enter a number to find its factor: ");
    scanf("%d", &num);
    printf("All factors of %d are: \n", num);
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d, ", i);
        }
    }
    
    return 0;
}