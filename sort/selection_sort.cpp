#include <iostream>
using namespace std;
typedef int Iterable;

int selection_sort(Iterable* sources, int count);

Iterable data[1000]; 

int main() {
    int count = 0;
    while(cin >> count) {
        for (int i = 0; i < count; i++)
            cin >> data[i];
        selection_sort(data, count);
        for (int i = 0; i < count; i++)
            cout << data[i] << " ";
        cout << endl;
    }
    return 0;
}

int selection_sort(Iterable* sources, int count)
{
	int min_index;
	Iterable temp;
	for (int i = 0; i < count; i++) {
		min_index = i;
		for (int j = i + 1; j < count; j++) {
			if (sources[j] < sources[min_index])
				min_index = j;
		}
		temp = sources[i];
		sources[i] = sources[min_index];
		sources[min_index] = temp;
	}
}
