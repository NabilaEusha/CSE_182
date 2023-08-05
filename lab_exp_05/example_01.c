//A C Program to find the reverse of a number.
#include <stdio.h>

int main(){
    int n,p, rev=0 , remainder;
    printf("\nEnter an integer: ");
    scanf("%d", &n);
    p=n;
    while (n!=0)
    {
        remainder= n%10;
        rev= rev*10 + remainder;
        n/=10;
    }
    printf("Reversed number = %d\n",rev);
    
     return 0;
}