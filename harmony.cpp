#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n;
	double result;
	while (cin >> n) {
		result = 1.0d;
		for (int i = 2; i <= n; i++)
			result += (1.0 / i);
		cout << setiosflags(ios::fixed) << setprecision(3) << result << endl;
	}
	return 0;
}
