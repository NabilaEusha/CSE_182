/*Write a C++ Program to change the value of
a constant integer using pointers.*/

#include <iostream>
using namespace std;

int main()
{

    int num = 3;
    int *ptr = &num;

    cout << "Original value: " << num<< endl;

    *ptr = 60;

    cout << "Modified value: " << num << endl;

    return 0;
}