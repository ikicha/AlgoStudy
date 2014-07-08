#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compareByX(const pair<int, int> lhs, const pair<int, int> rhs) {
    return lhs.first < rhs.first;
}

int main() {
    int num_case;
    cin >> num_case;
    for(int c = 0; c < num_case; c++) {
        int num;
        cin >> num;
        vector< pair <int, int> > data;
        for(int i = 0; i < num; i++) {
            int temp1, temp2;    
            cin >> temp1 >> temp2;
            data.push_back(make_pair<int, int>(temp1, temp2));
        }
        sort(data.begin(), data.end(), compareByX);

        vector<pair<int, int> >::iterator it = data.begin(), end = data.end();

        for(;it!=end;++it)
            cout << "(" << it->first << ", " << it->second << ")" << endl;
    }

    return 0;
}
