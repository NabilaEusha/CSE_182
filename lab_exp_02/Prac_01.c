// Write a C program to enter length and breadth of a rectangle and find its area and perimeter.
#include <stdio.h>

int main()
{
    int l, b, p, area;
    printf("Enter the length of a rectangle\n");
    scanf("%d", &l);
    printf("Enter the breadth of a rectangle\n");
    scanf("%d", &b);
    area = l * b;
    p = 2 * (l + b);
    printf("The area of the rectangle is %d\n", area);
    printf("The perimeter of the rectangle is %d\n", p);
    return 0;
}