#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> a;
    
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
 
        // consecutive equal elements hata do
        if(i == 0 || x != a.back()) {
            a.push_back(x);
        }
    }
 
    int cnt = 0;
 
    for(int i = 0; i < a.size(); i++) {
 
        // current element valley hai
        if((i == 0 || a[i-1] > a[i]) &&
           (i == a.size()-1 || a[i] < a[i+1])) {
            cnt++;
        }
    }
 
    if(cnt == 1)
        cout << "YES
";
    else
        cout << "NO
";
}
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        solve();
    }
 
    return 0;
}