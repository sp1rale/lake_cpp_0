#include <iostream>

using namespace std;

int main()
{
	double operat1, operat2;
	char operation;

	cout << "Enter the first number: ";
	cin >> operat1;

	cout <<"Choose the operation (+, -, *, /): ";
	cin >> operation;

	cout << "Enter the second number: ";
	cin >> operat2;

	double *ptrOperat1 = &operat1;
	double *ptrOperat2 = &operat2;

	double  result;

	switch (operation)
	{
		case '+':
			cout << *ptrOperat1 << " + " << *ptrOperat2 << " = " << *ptrOperat1 + *ptrOperat2 << endl;
			break;
		case '-':
			cout << *ptrOperat1 << " - " << *ptrOperat2 << " = " << *ptrOperat1 - *ptrOperat2 << endl;
			break;
		case '*':
			cout << *ptrOperat1 << " * " << *ptrOperat2 << " = " << *ptrOperat1 * *ptrOperat2 << endl;
			break;
		case '/':
			cout << *ptrOperat1 << " / " << *ptrOperat2 << " = " << *ptrOperat1 / *ptrOperat2 << endl;
			break;
		default:
			cout << "Error! The operator is not correct";
			break;
	}
	return 0;
}
