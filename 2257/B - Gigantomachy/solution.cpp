#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int testCases;
    cin >> testCases;
 
    while (testCases--) {
        int x, y;
        cin >> x >> y;
 
        vector<long long> first(x), second(y);
 
        for (auto &val : first){
            cin >> val;
        }
            
 
        for (auto &val : second){
              cin >> val;
        }
          
 
        long long scoreA = first[0] + x - 1;
        long long scoreB = second[0] + y - 1;
 
        cout << (scoreA >= scoreB ? 1 : 2) << '
';
    }
 
    return 0;
}