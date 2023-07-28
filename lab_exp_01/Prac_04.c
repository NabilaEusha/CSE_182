// Write a C program to calculate the area and perimeter of a rectangle
#include <stdio.h>

int main()
{
    int l, b, p, area;
    l = 5;
    b = 4;

    area = l * b;
    p = 2 * (l + b);
    printf("The area of the rectangle is %d\n", area);
    printf("The perimeter of the rectangle is %d\n", p);
    return 0;
}