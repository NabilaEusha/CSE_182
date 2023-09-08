#include <stdio.h>

int main()
{
    long int n, i, j, count = 0, cnt = 0;
    scanf("%ld", &n);
    long int m, lastDigit;
    m = n;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }

    for (i = 1; i <= count; i++)
    {
        lastDigit = m % 10;
        if (lastDigit != 0)
        {
            cnt = 0;
            continue;
        }
        else
        {
            cnt++;
        }
    }
    if (cnt >= 5)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }
    return 0;
}