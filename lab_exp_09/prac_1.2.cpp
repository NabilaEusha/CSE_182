/* Write a C++ program to add, subtract, multiply and divide two integers
using the following types of user-defined functions -
• No Argument Passed but return a value */


# include <iostream>
using namespace std;

int calc() {
char op;
  float num1, num2, res;

  cout << "Enter operator: +, -, *, /: ";
  cin >> op;

  cout << "Enter two operands: ";
  cin >> num1 >> num2;

  switch(op) {

    case '+':
      res= num1 + num2;
      break;

    case '-':
      res= num1 - num2;
      break;

    case '*':
      res= num1 * num2;
      break;

    case '/':
      res= num1 / num2;
      break;

    default:
      cout << "Error! operator is not correct";
      break;
  
  }
  return(res);
}

int main(){
    int r;
    r = calc();
    cout<<endl<<"Result = "<<r<<endl;
    return 0;
}