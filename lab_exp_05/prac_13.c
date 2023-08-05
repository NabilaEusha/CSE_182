//Write a C program to create Simple Calculator using switch case.
#include<stdio.h>
 
int main() {
    char operator;
    float num1,num2;
     
    printf("\nEnter two numbers as operands\n");
    scanf("%f%f", &num1, &num2);
    printf("Enter an arithemetic operator(+-*/)\n");
    scanf("%*c%c",&operator);
 
    switch(operator) {
        case '+': 
         printf("%.2f + %.2f = %.2f",num1, num2, num1+num2);
         break;
        case '-':
                printf("%.2f - %.2f = %.2f",num1, num2, num1-num2);
                break;
        case '*':
                printf("%.2f * %.2f = %.2f\n",num1, num2, num1*num2);
                break;
        case '/':
                printf("%.2f / %.2f = %.2f",num1, num2, num1/num2);
                break;
        default: 
                printf("ERROR.");
    }
     
    return 0;
}