#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3], i, j, k;

    printf("Enter input for matrix a: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter input for matrix b: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Output of matrix a: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    printf("Output of matrix b: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d  ", b[i][j]);
        }
        printf("\n");
    }
    // multiplication of two matrix
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("The product of the two matrixes is: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}