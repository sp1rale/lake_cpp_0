#include <iostream>

using namespace std;

int main()
{
	const int arrSIZE = 7;
	int numbers[arrSIZE] = { 1, 2, 3, 4, 5, 6, 7 };
	int* ptr = numbers;

	cout << "Output array: ";
	for (int i = 0; i < arrSIZE; ++i) {
		cout << *(ptr + i) << " ";
	}
	int* startPtr = ptr;
	int* endPtr = ptr + arrSIZE - 1;

	while (startPtr < endPtr) {
		int temp = *startPtr;
		*startPtr = *endPtr;
		*endPtr = temp;
		
		++startPtr;
		--endPtr;
	}

	cout << "\nArray after reordering: ";
	for (int i = 0; i < arrSIZE; ++i) {
		cout << *(ptr + i) << " ";
	}
cout << endl;
	return 0;
}