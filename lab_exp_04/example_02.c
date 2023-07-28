//Write a C Program to calculate the sum of first n natural numbers.
#include <stdio.h>

int main(){
    int i,n,sum=0;
    printf("Enter the number of n\n");
    scanf("%d",&n);
    for(i=0; i<=n ; i++){
        sum+=i;
    }
    printf("Sum=%d \n",sum);
    return 0;
}