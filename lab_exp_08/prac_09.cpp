//Write a C++ program to check whether a matrix is sparse or not.

/*definition of Sparse where a matrix is considered sparse if 
the number of 0s is more than half of the elements in the matrix,*/

#include <iostream>
using namespace std;
int main()
{
    int arr[10][10];
    int row, col, total_row, total_col, n, count=0;
    
    cout << "Enter the rows and columns: ";
    cin >> total_row >> total_col;
    for (row = 0; row < total_row; row++)
    {
        for (col = 0; col < total_col; col++)
        {
            cin >> arr[row][col];
        }
    }
    n=total_row * total_col;
    
    for (row = 0; row < total_row; row++)
    {
        for (col = 0; col < total_col; col++)
        {
           if (arr[row][col]==0)
           {
              count+=1;
           }
           
        }
    }
    
    if (count> (n/2))
    {
        cout<<"This matrix is a sparse matrix\n";
    }
    else
    {
        cout<<"This matrix is not a sparse matrix\n";
    }
    
    
    return 0;
}