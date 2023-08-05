// A C Program to demonstrate the use of switch statement.
#include <stdio.h>

int main()
{
    char ch = 'B';
    switch (ch)
    {
    case 'A':
        printf("CaseA\n");
        break;
    case 'B':
        printf("CaseB\n");
        break;
    case 'C':
        printf("CaseC\n ");
        break;
    default:
        printf("Default ");
    }
    return 0;
}