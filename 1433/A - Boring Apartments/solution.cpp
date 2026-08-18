#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        string x;
        cin >> x;
 
        int digit = x[0] - '0';
        int len = x.size();
 
        int ans = (digit - 1) * 10;
 
        for(int i = 1; i <= len; i++) {
            ans += i;
        }
 
        cout << ans << endl;
    }
 
    return 0;
}