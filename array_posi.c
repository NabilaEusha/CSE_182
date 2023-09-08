#include <stdio.h>

int main()
{
    int a[] = {10, 20, 30, 40, 50, 60, 70}, b[] = {50, 70, 10, 40, 30}, f, p, n, i, j, m;
    printf("Enter an input");
    scanf("%d", &n);
    f = 0;
    p = 0;
    for (i = 0; i < 7; i++)
    {
        if (a[i] == n)
        {
            f = 1;
            break;
        }
    }
    for (j = 0; j < 7; j++)
    {
        if (b[j] == n)
        {
            p = 1;
            break;
        }
    }

    if (f == 1 && p == 1)
    {
        m = i * j;
        printf("%d", m);
    }
    else
    {
        printf("-1");
    }

    return 0;
}