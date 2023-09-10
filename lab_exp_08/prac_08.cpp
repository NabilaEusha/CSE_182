//Write a C++ program to find the sum of the upper triangular matrix.

#include <iostream>
using namespace std;
int main()
{
    int arr[10][10];
    int row, col, total_row, total_col, sum=0;
    
    cout << "Enter the rows and columns: ";
    cin >> total_row >> total_col;
    for (row = 0; row < total_row; row++)
    {
        for (col = 0; col < total_col; col++)
        {
            cin >> arr[row][col];
        }
    }

     for (row = 0; row < total_row; row++)
    {
        for (col = 0; col < total_col; col++)
        {
           if (row==col || row<col)
           {
            sum=sum + arr[row][col];
           }
           
        }
    }
    
            cout << "Sum=  "<< sum;
      
    return 0;
}