//Write a C++ program to find the lower triangular matrix.


#include <iostream>
using namespace std;
int main()
{
    int arr[10][10];
    int row, col, total_row, total_col, isLower;
    
    cout << "Enter the rows and columns: ";
    cin >> total_row >> total_col;
    for (row = 0; row < total_row; row++)
    {
        for (col = 0; col < total_col; col++)
        {
            cin >> arr[row][col];
        }
    }
    
    isLower = 1;
    for (row = 0; row < total_row; row++)
    {
        for (col = 0; col < total_col; col++)
        {
            /* If elements below the main diagonal (col>row)
            is not equal to zero then it is not upper triangular matrix */
            if (col > row && arr[row][col] != 0)
            {
                isLower = 0;
            }
        }
    }

    if (isLower == 1)
    {
        cout << "\nThe matrix is Lower triangular matrix." << endl;
    }
    else
    {
        cout << "\nThe matrix is not Lower triangular matrix." << endl;
    }
    return 0;
}

