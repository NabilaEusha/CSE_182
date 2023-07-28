// Write a C program to find sum of all natural numbers between 1 to n.
#include <stdio.h>

int main(){
    int i,n,sum=0;
    printf("Enter the number of n\n");
    scanf("%d",&n);
    for(i=0; i<=n ; i++){
        sum+=i;
    }
    printf("Sum=%d  ",sum);
    return 0;
}