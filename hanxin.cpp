#include <iostream>

using namespace std;

int main()
{
	int a,b,c, count;
	while (cin >> a >> b >> c) {
		count = -1;
		for (int i = 10; i <= 100; i++) {
			if (i % 3 == a && i % 5 == b && i % 7 == c) {
				count = i;
				break;
			}
		}
		if (count != -1)
			cout << count << endl;
		else
			cout << "No answer" << endl;
	}
	return 0;
}
