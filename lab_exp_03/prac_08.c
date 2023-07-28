/* Write a C program to input electricity unit charges and
calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.*/
#include <stdio.h>

int main()
{
    int unit;
    float bill, surCharge, totalBill;
    printf("Enter total units consumed: ");
    scanf("%d", &unit);
    if (unit <= 50)
    {
        bill = unit * 0.50;
    }
    else if (unit <= 150)
    {
        bill = (50 * 0.5) + ((unit - 50) * 0.75);
    }
    else if (unit <= 250)
    {
        bill = (50 * 0.5) + (100 * 0.75) + ((unit - 150) * 1.20);
    }
    else
    {
        bill = (50 * 0.5) + (100 * 0.75) + (100 * 1.20) + ((unit - 250) * 1.50);
    }
    surCharge = 0.20;
    totalBill = bill + (bill * surCharge);
    printf("Electricity Bill = %.2f taka", totalBill);
    return 0;
}