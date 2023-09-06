// Write a C++ program to count the frequency of each element in an array.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 30, 10, 20, 10, 20, 30, 10};

    int visited[8];

    for (int i = 0; i < 8; i++)
    {

        if (visited[i] != 1)
        {
            int count = 1;
            for (int j = i + 1; j < 8; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    visited[j] = 1;
                }
            }

            cout << arr[i] << " occurs at " << count << " times " << endl;
        }
    }

    return 0;
}