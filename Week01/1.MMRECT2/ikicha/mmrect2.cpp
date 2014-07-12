#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
//#include <fstream>
#include <set>
#include <cmath>
#define CONTAINS( x , y ) ((x).find(y) != (x).end())

using namespace std;

inline void solve(ifstream &fin);
inline void solve();
inline int min_flag(int x, int y);
int main() {
    int num_case;
    //ifstream fin("input.txt");
    //fin>> num_case;
    cin>> num_case;
    for(int c = 0; c < num_case; c++) { 
        //solve(fin);
        solve();
    }
    // fin.close();
    return 0;
}


//inline void solve(ifstream &fin) {
inline void solve() {
    map<int, set<int> > data;
    int num;
    //fin >> num;
    cin >> num;
    for(int i = 0; i < num; i++) {
        int temp1, temp2;    
        //fin >> temp1 >> temp2;
        cin >> temp1 >> temp2;
        data[temp1].insert(temp2);
    }
        
    map<int, set<int> >::iterator i;
    set<int>::iterator j, k;
    int max_result = 0, min_result = 0;
    for(i = data.begin(); i!=data.end();++i) {
        for(j = i->second.begin(); j!=i->second.end()--; ++j) {
            for(k = j; k!=i->second.end();++k) {
                if(*j != *k){
                   int size = abs(*j - *k);
                    for(int l = -1; l<2; l=l+2){
                        int flag = i->first + size * l;
                        if(CONTAINS(data, flag)) {
                            if(CONTAINS(data[flag], *j) && CONTAINS(data[flag], *k)) {
                                max_result = max(max_result, size);
                                min_result = min_flag(min_result, size);
                            }
                        }
                    }
                }
            }

        }
        
    }
    cout << min_result << " " << max_result << endl;
}

inline int min_flag(int x, int y) {
    return x==0? y: min(x,y);
}
