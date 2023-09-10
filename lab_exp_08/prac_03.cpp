//Write a C++ program to perform Scalar matrix multiplication.


#include <iostream>
using namespace std;
int main()
{
    int a[10][10],  result[10][10], sub[10][10], n,r, c, i, j;
    cout << "Enter the number of rows = ";
    cin >> r;
    cout << "Enter the number of columns = ";
    cin >> c;
   
    cout << "Enter the  matrix elements" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter a number to multiply with the matrix = ";
    cin >> n;
   
    

     for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            result[i][j]= n * a[i][j];
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}