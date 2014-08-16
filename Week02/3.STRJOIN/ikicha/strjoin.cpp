/*
 * StrJoin.cpp
 *
 *  Created on: 2014. 7. 28.
 *      Author: ikicha
 */

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int solve(vector<int>);

int main() {
    ifstream fin("input.txt");
    int num_case;
    fin >> num_case;

    for (int i = 0; i < num_case; i++) {
        int n;
        fin >> n;
        vector<int> v;
        for (int j = 0; i < n; j++) {
            int temp;
            fin >> temp;
            v.push_back(temp);
        }
        cout << solve(v) << endl;
    }
    fin.close();
    return 0;
}

int solve(vector<int> data){
    sort(data.begin(), data.end());
    return 0;
}
