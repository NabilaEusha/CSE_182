// Write a C program to calculate the area and perimeter of a triangle
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, p, s, area;
    a = 4;
    b = 5;
    c = 6;
    p = a + b + c;
    s = p / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The area of the triangle is %f\n", area);
    printf("The perimeter of the triangle is %f\n", p);
    return 0;
}