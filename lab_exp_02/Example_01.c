//A C program to calculate the perimeter and area of a triangle.
#include <stdio.h>
#include <math.h>
int main()
{

    float a, b, c, p, s, area;
    printf("Enter three sides of triangle\n");
    scanf("%f %f %f", &a, &b, &c);
    p = a + b + c;
    s = p / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The area of the triangle is %f\n", area);
    printf("The perimeter of the triangle is %f\n", p);
    return 0;
}