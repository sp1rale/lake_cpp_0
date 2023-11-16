#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;

	int  *ptrA = &a;
	int  *ptrB = &b;

	if (*ptrA > *ptrB)
	{
		cout << "The largest number - " << *ptrA << endl;
	}
	else if (*ptrA > *ptrB)
	{
		cout << "The largest number - " << *ptrB << endl;
	}
	else
	{
		cout << "equal number"   << endl;
	}
	return 0;
}
