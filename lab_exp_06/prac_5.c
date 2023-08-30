//Write a C program to find the reverse of an array.
#include <stdio.h>

int main(){
    int a[20], i, n,r;
    printf("How many numbers do you want to input(1-20)? \n");
    scanf("%d", &n);
    r=n-1;
    printf("Enter some integers: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nOriginal array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("\n\nReverse of your array: ");
    for ( i = r; i >= 0; i--)
    {
        printf("%d, ",a[i]);
    }
    
    return 0;
}