/* Write a C++ program to find the sum of two one-dimensional arrays using
the function. */

#include <iostream>
using namespace std;

void array_sum(int arr_1[], int arr_2[], int result[], int n)
{
    for (int i = 0; i < n; i++)
    {
        result[i] = arr_1[i] + arr_2[i];
    }
}

int main()
{
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr_1[n], arr_2[n], result[n];

    cout << "Enter the elements of first array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr_1[i];
    }

    cout << "Enter the elements of second array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr_2[i];
    }

    array_sum(arr_1, arr_2, result, n);

    cout << "Sum of the two arrays: ";
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}