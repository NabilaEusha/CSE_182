// Write a C++ program to find the second largest element in an array.
#include <iostream>
using namespace std;
int main()
{
    int arr[15] = {1, 10, 16, 19, 23, 15}, max, secondMax;
    max = arr[0]; // letting the 1st element is the maximum number
    
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    
    for (int i = 1; i < 6; i++)
    {
        if (arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
    }
    cout << "The second largest element is : " << secondMax << endl;
    return 0;
}