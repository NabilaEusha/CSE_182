// Write a C program to find LCM of two numbers.
#include<stdio.h>

int main()
{
    int i = 1, num1, num2, gcd, lcm, product;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &num1, &num2);
    product = num1 * num2;
    while (i <= num1 && i <= num2)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
        i++;
    }
    lcm = product / gcd;
    printf("lCM= %d\n", lcm);
    return 0;
}