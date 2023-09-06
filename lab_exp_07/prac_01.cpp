// Write a C++ program to find the maximum and minimum elements from an array.
#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {10, 11, 12, 13, 15, 9}, max, min;
    max = arr[0]; // letting the 1st element is the maximum number
    for (int i = 1; i < 6; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Maximum number is : " << max << endl;
    min = arr[0]; // letting the 1st element is the minimum number
    for (int i = 1; i < 6; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Minimum number is : " << min;
    return 0;
}