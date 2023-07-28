// Write a C program to calculate the area of a circle
#include <stdio.h>

int main()
{
    float r, pi, area;
    r = 5;
    pi = 3.1416;
    area = pi * r * r;
    printf("The area of the circle is %f\n",area);
    return 0;
}