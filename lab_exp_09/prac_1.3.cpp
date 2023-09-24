/* Write a C++ program to add, subtract, multiply and divide two integers
using the following types of user-defined functions -
• Argument Passed but no return value */

#include <iostream>
using namespace std;

void calc(float num1 , float num2 , char op)
{

    float res;
    switch (op)
    {

    case '+':
        res = num1 + num2;
        break;

    case '-':
        res = num1 - num2;
        break;

    case '*':
        res = num1 * num2;
        break;

    case '/':
        res = num1 / num2;
        break;

    default:
        cout << "Error! operator is not correct";
        break;
    }
    cout<<endl<<"Result = "<<res<<endl;
}

int main()
{
    char op;
    int num1, num2;
    cout << "Enter operator: +, -, *, /: ";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;
    calc(num1, num2, op);

    return 0;
}