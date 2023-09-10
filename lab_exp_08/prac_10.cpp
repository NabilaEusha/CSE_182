/* Write a C++ program to check whether a matrix is an identity matrix or
not. */

#include <iostream>
using namespace std;
int main()
{
    int arr[10][10];
    int row, col, total_row, total_col, identity;

    cout << "Enter the rows and columns: ";
    cin >> total_row >> total_col;
    for (row = 0; row < total_row; row++)
    {
        for (col = 0; col < total_col; col++)
        {
            cin >> arr[row][col];
        }
    }
    
identity= 1;
    for (row = 0; row < total_row; row++)
    {
        for (col = 0; col < total_col; col++)
        {
            if (row == col && arr[row][col] != 1)
            {
                    identity = 0;
            }
            else if(row != col && arr[row][col] != 0)
            {
                identity = 0;
            }

        }
    }

    if (identity == 1)
        cout << "The given array is an identity matrix.\n ";
    else
        cout << "The given array is not an identity matrix.\n ";
    
    for (row = 0; row < total_row; row++)
    {
        for (col = 0; col < total_col; col++)
            cout << arr[row][col] << " ";
        cout << "\n ";
    }

    return 0;
}