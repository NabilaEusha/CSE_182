// Write a C program to check whether a number is Strong number or not.
#include <stdio.h>

int main()
{

    int n ,t ,remainder,sum=0,product ;
    printf("\nEnter n: ");
    scanf("%d", &n);
    t=n;
    while (n != 0)
    {
        remainder=n%10;
        product=1;
        for (int i = 1; i <= remainder ; i++)
        {
            product= product *i;
        }
        sum=sum+product;
        n=n/10;  
    }
    if (sum==t)
    {
        printf("%d is a strong number.\n",t);
    }
    else{
        printf("%d is not a strong number.\n",t);
    }
    return 0;
}