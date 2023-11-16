#include <iostream>

using namespace std;

int main()
{
	const int arrSize = 7;
	int sourceArr[arrSize] = { 1, 2, 3, 4, 5, 6, 7 };
	int destArr[arrSize];

	int *sourcePtr = sourceArr;
	int *destPtr = destArr + arrSize - 1;

	for (int i = 0; i < arrSize; ++i)
	{
		*destPtr = *sourcePtr;
		++sourcePtr;
		--destPtr;
	}

	for (int i = 0; i < arrSize; ++i){
	cout << sourceArr[i] << " ";
	}
	
    for (int i = 0; i < arrSize; ++i)
	{
	cout << destArr[i] << " ";
	}
	cout << endl;

	return 0;
}
