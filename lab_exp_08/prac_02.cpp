//Write a C++ program to subtract two matrices.

#include <iostream>
using namespace std;
int main()
{
    int a[10][10], b[10][10], result[10][10], sub[10][10], r, c, i, j;
    cout << "Enter the number of rows = ";
    cin >> r;
    cout << "Enter the number of columns = ";
    cin >> c;
   
    cout << "Enter the first matrix elements" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
   
    cout << "Enter the second matrix elements" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> b[i][j];
        }
    }

     for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sub[i][j]=a[i][j]-b[i][j];
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << sub[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}