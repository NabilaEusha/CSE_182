// Write a C program to enter length in centimeter and convert it into meter and kilometer.

#include <stdio.h>

int main()
{
    
    float c, m, k;
    printf("Enter length in centimeter\n");
    scanf("%f", &c);
    m = c / 100;
    k = c / 100000;
    printf("Length in meter %f\n", m);
    printf("Length in kilometer %f\n", k);
    return 0;
}