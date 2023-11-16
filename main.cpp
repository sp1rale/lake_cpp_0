#include <iostream>

using namespace std;

int main()
{
	const int arrSIZE = 7;
	int arr[arrSIZE] = { 1, 2, 3, 4, 5, 6, 7 };

	int *ptr = arr;

	int sum = 0;
	for (int i = 0; i < arrSIZE; i++)
	{
		sum += *ptr;
		++ptr;
	}

	cout << "Sum of array elements: " << sum << endl;

	return 0;
}
