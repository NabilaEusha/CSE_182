// Write a C program to enter any number and print its reverse.
#include <stdio.h>

int main()
{
    int n, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    // Repeat the till 'n' becomes 0
    while (n != 0)
    {
        /*
          Increase place value of reverse and
          add last digit to reverse
         */
        reverse = (reverse * 10) + (n % 10);
        // Remove last digit from 'n'
        n = n / 10;
    }
    printf("Reverse of the input number is %d\n", reverse);
    return 0;
}