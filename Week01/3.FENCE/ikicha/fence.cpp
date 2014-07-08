#include <iostream>

using namespace std;

long solve();

int main() {
    int num_case;
    cin >> num_case;
    for(int i = 0; i < num_case; i++)
        cout << solve() << endl;
}

inline long solve() {
    int n;
    cin >> n;
    int* data = new int[n];
    for(int i = 0; i < n; i++)
        cin >> data[i];

    long result = 0;
    for(int i = 0; i < n; i++) {
        int min = 10001;
        for(int j = i; j < n; j++) {
            min = min < data[j]? min: data[j];
            int size = (j-i+1) * min;
            result = result > size? result: size;
        }
    }
    delete[] data;
    return result;
} 
