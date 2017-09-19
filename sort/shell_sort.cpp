#include <iostream>

using namespace std;

typedef int Iterable;

int insertion_sort(Iterable* sources, int count, int gap);

Iterable data[1000];

int main()
{
    int count;
    while (cin >> count) {
        for(int i; i < count; i++) {
            cin >> data[i];
        }
        insertion_sort(data, count, count / 2);
	insertion_sort(data, count, 1);
        for (int i = 0; i < count; i++)
            cout << data[i] << " ";
        cout << endl;
    }
    return 0;
}

int insertion_sort(Iterable* sources, int count, int gap)
{
    int swrap_count = 0;
    for (int i = gap; i < count; i++) {
        Iterable value = sources[i];
        int checking_count = i;
        while (checking_count > 0 && (sources[checking_count - gap] > value)) {
            sources[checking_count] = sources[checking_count - gap];
            checking_count -= gap;
        }
        sources[checking_count] = value;
    }
}
