// A C Program to demonstrate the use of break statement.
#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("\n%d\n", i);
        if (i == 6)
        {
            break;
        }
    }
    printf("came outside of the loop i = %d\n", i);

    return 0;
}