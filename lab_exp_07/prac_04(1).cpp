#include <iostream>
using namespace std;

int main()
{
	int n, i, j;

	cout << "Number of elements= ";
	cin >> n;
	cout << "Give " << n << " elements: ";
	int A[n];

	for (i = 0; i < n; i++)
	{
		cin >> A[i];
	}

	for (i = 0; i < n; i++)
	{
		int unique = 1;
		for (j = 0; j < n; j++)
		{
			if (i != j && A[i] == A[j])
			{
				unique = 0;
				break;
			}
		}
		if (unique == 1)
		{
			cout << A[i] << " ";
		}
	}

	return 0;
}