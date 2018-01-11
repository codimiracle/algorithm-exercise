#include <iostream>

using namespace std;

bool isDaffodil(int n) {
	int c = n % 10;
	int b = n / 10 % 10;
	int a = n / 100 % 10;
	return (a * a * a + b * b * b + c * c * c == n);
}
int main()
{
	for (int i = 100; i <= 999;i++) {
		if (isDaffodil(i))
			cout << i << endl;
	}
	return 0;
}
