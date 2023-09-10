// Write a C++ program to find the sum of the minor diagonal elements of a matrix.
#include <iostream>
using namespace std;
int main()
{
    int i, j, n,r,c, arr[20][20];
    cout << "Enter the number of rows = ";
    cin >> r;
    cout << "Enter the number of columns = ";
    cin >> c;
   
    cout << "Enter the matrix elements" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum_major = 0;
    int sum_minor = 0;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
           /* if (i == j)
            {
                sum_major = sum_major + arr[i][j];
            }*/
            /* r & c is same as square matrix */
            if ((i + j) == r - 1)
            {
                sum_minor = sum_minor + arr[i][j];
            }
        }
    }
    //cout << "The sum of major diagonal: " << sum_major << endl;
    cout << "The sum of minor diagonal: " << sum_minor << endl;
}