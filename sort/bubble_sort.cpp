#include <iostream>
using namespace std;
typedef int Iterable;

int bubble_sort(Iterable* sources, int count);
Iterable data[1000]; 
int main() {
    int count = 0;
    while(cin >> count) {
        for (int i = 0; i < count; i++)
            cin >> data[i];
        bubble_sort(data, count);
        for (int i = 0; i < count; i++)
            cout << data[i] << " ";
        cout << endl;
    }
    return 0;
}

int bubble_sort(Iterable *sources, int count) {
    int swap_count = 0;
    Iterable temp;
    for (int i = 0; i < count; i++) {
        for (int j = count - 1; j > i; j--) {
            if (sources[j - 1] > sources[j]) {
                temp = sources[j - 1];
                sources[j - 1] = sources[j];
                sources[j] = temp;
                swap_count++;
            }
        }
    }
    return swap_count;
}
