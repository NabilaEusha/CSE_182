//Write a C program to enter any number and check whether the number is palindrome or not.
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
    if(rev==p)
        {
            printf("Its a palindrome number.\n");
        }
    else{
            printf("Its not a palindrome number.\n");
        }
    
    printf("Reversed number = %d\n",rev);
    return 0;
}