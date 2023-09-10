//Write a C++ program to check whether two matrices are equal or not.

#include <iostream>
using namespace std;
int main()
{
    int a[10][10], b[10][10], result[10][10], multiplied[10][10], r, c, i, j, k,equal;
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
    equal = 1;
    for (i= 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            
            if (a[i][j] != b[i][j])
            {
                equal = 0;
            }
        }
    }

    if (equal == 1)
    {
        cout << "\nGiven two matrices are equal" << endl;
    }
    else
    {
        cout << "\nGiven two matrices are not equal" << endl;
    }
    return 0;
}

