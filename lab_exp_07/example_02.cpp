// A C++ Program to sort the array elements. [Bubble Sort]
#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {5, 1, 4, 2, 8}, i, j, k, temp;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (arr[j] > arr[j + 1])
            // value swaping
            { 
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            cout << "Iteration: " << i + 1 << " "<< "Pass --> " << j + 1 << ": ";
            for (k = 0; k < 5; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}