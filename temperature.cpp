#include <iostream>

using namespace std;

int main()
{
	int f;
	cout << "Fahrenheit to Celsius" << endl;
	while (cin >> f)
	{
		cout << (f - 32) * 5 / 9 << endl;
	}
	
}
