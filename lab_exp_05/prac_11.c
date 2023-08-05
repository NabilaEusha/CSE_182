// Write a C program print total number of days in a month using switch case.
#include <stdio.h>

int main()
{
    int month;
    printf("\nEnter a number of month(1-12): ");
    scanf("%d", &month);
    printf("Total number of days in %d no month is: ", month);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 days");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 days");
        break;
    case 2:
        printf("28 or 29(for leap year) Days");
        break;

    default:
        printf("Invalid input!");
    }
    return 0;
}