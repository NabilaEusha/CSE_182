//Write a C++ program to demonstrate the use of function type-1.
/* No arguments passed and no return value. */
#include<iostream>
using namespace std;
void addition()
{
int num1,num2, sum; 
cout<<"Enter number 1: "<<endl;
cin>> num1;
cout<<"Enter number 2: "<<endl;
cin>> num2;
sum = num1 + num2;
cout<<"Output: "<<sum;
}
int main()
{
addition(); 
return 0;
}