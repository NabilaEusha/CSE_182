/* Write a C++ program to add, subtract, multiply and divide two integers
using the following types of user-defined functions -
• Argument passed and returns a value */

#include <iostream>
using namespace std;

int calc(float num1 , float num2 , char op)
{
    int res;
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
    return(res);
}

int main()
{
    char op;
    int num1, num2,r;
    cout << "Enter operator: +, -, *, /: ";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;
    r = calc(num1, num2, op);
  cout<<endl<<"Result = "<<r<<endl;

    return 0;
}