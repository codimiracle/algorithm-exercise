#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		if (n < 360)
		{
			cout << "the number should less then or equal 360" << endl;
		}
		cout << "sin(n): " <<  sin(n) << endl;
		cout << "cos(n): " <<  cos(n) << endl;
	}
	return 0;
}
