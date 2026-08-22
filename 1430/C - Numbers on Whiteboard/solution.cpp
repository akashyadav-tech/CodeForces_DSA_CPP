#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
 
        long long cur = n;
        vector<pair<long long,long long>> ops;
 
        for (int i = n - 1; i >= 1; i--) {
            ops.push_back({cur, i});
            cur = (cur + i + 1) / 2;
        }
 
        cout << cur << "
";
        for (auto &p : ops)
            cout << p.first << " " << p.second << "
";
    }
    return 0;
}