#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        vector<int> a(n), idx(n);
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            idx[a[i]] = i;
        }
 
        int len = n - k + 1;
        vector<int> miss;
 
        for (int i = 0; i < len; i++) {
            if (idx[i] >= len) {
                miss.push_back(i);
            }
        }
 
        if (miss.empty()) {
            cout << -1 << '
';
            continue;
        }
 
        int val = len;
 
        if (miss.size() >= 2) {
            val = miss[1];
        }
 
        int p = -1;
 
        for (int i = 0; i < len; i++) {
            if (a[i] >= val) {
                p = i;
                break;
            }
        }
 
        cout << p + 1 << " " << idx[miss[0]] + 1 << '
';
    }
 
    return 0;
}