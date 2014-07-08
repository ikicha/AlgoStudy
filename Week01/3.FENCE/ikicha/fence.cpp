#include <iostream>
#define BIGGER( x , y ) ((x) > (y) ? (x) : (y))
#define SMALLER( x , y ) ((x) < (y) ? (x) : (y))
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
    int max_height = 0, min_height = 10001;
    for(int i = 0; i < n; i++) {
        cin >> data[i];
        max_height = BIGGER(data[i],max_height);
        min_height = SMALLER(data[i],min_height);
    }
    long result = 0;
    int* temp = new int[max_height+1];
    for(int i = min_height; i < max_height; i++)
        temp[i] = 0;
    for(int i = 0; i < n; i++)
        for(int j = min_height; j <= max_height; j++)
            if(j <= data[i]) {
                temp[j]++;
                result = BIGGER(temp[j] * j, result);
            } else {
                result = BIGGER(temp[j] * j, result);
                temp[j]=0;
            }
    for(int i = min_height; i < max_height; i++)
        result = BIGGER(temp[i]*i, result);

    delete[] temp;
    delete[] data;
    return result;
}
