// Write a C program to count the total number of even and odd elements in an array.
#include <stdio.h>

int main()
{
    int array[20], i, n, evenCount = 0, oddCount = 0;
    printf("How many numbers do you want to input(1-20)? \n");
    scanf("%d", &n);
    printf("Enter some integers: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    printf("Even=%d \nOdd=%d", evenCount, oddCount);

    return 0;
}
