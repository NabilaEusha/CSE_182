// Write a C program to find HCF (GCD) of two numbers.
#include<stdio.h>
int main(){
    int i=1,num1, num2, gcd;
    printf("\nEnter two numbers: ");
    scanf("%d %d",&num1 , &num2);
    while(i<=num1 && i<=num2)
    {
       if (num1%i==0 && num2%i==0)
       {
        gcd=i;
       }
       i++;
    }
    printf("GCD= %d\n", gcd);
    return 0;
}