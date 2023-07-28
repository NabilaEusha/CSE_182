// Write a C program to find maximum between three numbers using conditional/ternary operator.

    #include <stdio.h>

    int main()
    {
        int a, b, c;
        printf("Enter three number \n");
        scanf("%d %d %d", &a, &b, &c);
        ((a>b) && (a>c))? printf("Max=%d",a) : ((b>c)? printf("Max=%d",b) : printf("Max=%d",c));



    return 0;
}