#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Enter two values: ";
    if (cin >> a >> b)
    
    {
        cout << "The original values: a = " << a << ", b = " << b << endl;
        int tmp = a;
        a = b;
        b = tmp;
        cout << "After swapping: a = " << a << ", b = " << b << endl;
    }
    else
    {
       cout << "Unexpected error occured" << endl;
    }
	return 0;
}
