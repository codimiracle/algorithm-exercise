#include <iostream>

using namespace std;

int main()
{
	double pi = 1 - (1 / 3.0), p;
	for (int i = 2;; i++) {
		
		p = (1.0 / (2 * i + 1));
		if (p < 10e-6) {
			cout << pi << endl;
			break;
		}
		pi += p * ((i % 2 == 0) ? 1 : -1);
	}
	return 0;
}
