// Write a C program to convert days into years, months, weeks and days.

#include <stdio.h>

int main()
{

    int days, years, months, weeks;
    printf("Enter the number of days \n");
    scanf("%d", &days);

    years = days / 365;
    days = days - (years * 365);
    months = days / 30;
    days = days - (months * 30);
    weeks = days / 7;
    days = days - (weeks * 7);
    printf("%d years\n %d months\n %d weeks\n %d days", years, months, weeks, days);

    return 0;
}
