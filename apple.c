#include <stdio.h>

int main(){
    int apple, d;
    printf("Enter the number of apples\n");
    scanf("%d", &apple);
    d=apple/2;
    if((apple%2!=0) || (d%2!=0))
    {
        printf("No");
    }
    else{
        printf("Yes");
    }
    return 0;
}