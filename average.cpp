#include <iostream>

using namespace std;

int main()
{
	int count, number;
	long sum;
	while (cin >> count)
	{
		sum = 0;
		for (int i = 0; i < count; i++)
		{
			
			cin >> number;
			sum += number;
		}
		cout << "Average: " << float(sum) / count << endl;

	}
}
