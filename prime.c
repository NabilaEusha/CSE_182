#include <stdio.h>

int main()
{
    int i, j, f, m, n;
    printf("input");

    scanf("%d", &n);


    for (i = 2; i <= n; i++)
    {
        m = i;
        f = 0;
        for (j = 2; j < m; j++)
        {
            if (m % j == 0)
            {
                f = 1;
                break;
            }
        }

        if (f == 0)
        {
            printf("%d\n", i);
        }
    }
}