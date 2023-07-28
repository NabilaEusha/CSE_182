// Write a C program to enter radius of a circle and find its diameter, circumference and area.
#include <stdio.h>

int main()
{
    int r;
    float pi, d, c, area;
    printf("Enter the radius of a circle\n");
    scanf("%d", &r);
    pi = 3.1416;

    d = 2 * r;
    c = 2 * pi * r;
    area = pi * r * r;
    printf("The diameter of the circle is %f\n", d);
    printf("The circumference of the circle is %f\n", c);
    printf("The area of the circle is %f\n", area);
    return 0;
}