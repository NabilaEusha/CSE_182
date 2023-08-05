//A C Program to demonstrate the use of continue statement.
#include <stdio.h>

int main(){
    int i, n=20;
    for ( i = 0; i < n; i++)
    {
        if (i%5 ==0)
        {
            printf("\nPass \n");
            continue;
        }
        
    }
    
    return 0;
}