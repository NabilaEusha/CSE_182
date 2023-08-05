//Write a C program to find sum of all prime numbers between 1 to n.
#include <stdio.h>

int main(){
    
    int i, j, f, m,sum=0 ,end;
    // f= flag variable
    printf("\nFind sum of all prime numbers between 1 to : ");
    scanf("%d", &end);

    for (i = 2; i <= end; i++)
    {
        m = i; // assigning i to m
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
            sum=sum+m;
        }
    }
    printf("Sum of all prime numbers is %d.\n", sum);
    return 0;
}