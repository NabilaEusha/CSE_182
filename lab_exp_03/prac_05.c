//Write a C program to input all sides of a triangle and check whether triangle is valid or not.
#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter three sides of a triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    if ((a+b>c)&&(b+c>a)&&(a+c>b))
    {
        printf("Triangle is valid \n");
    }
    else{
        printf("Triangle is not valid \n");
    }
    
    return 0;
}