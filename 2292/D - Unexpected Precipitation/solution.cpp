#include <bits/stdc++.h>
using namespace std;
 
void solve(){
             int n;
        cin >> n;
 
        vector<long long> x(n), y(n);
 
        for (int i = 0; i < n; i++){
            cin >> x[i];
        }
            
 
        for (int i = 0; i < n; i++){
            cin >> y[i];
        }
            
 
        long long dp0 = 0, dp1 = 0;
 
        for (int i = n - 1; i >= 0; i--) {
            long long a = max(x[i] - y[i] + dp0, dp1);
            long long b = min(y[i] - x[i] + dp1, dp0);
 
            dp0 = a;
            dp1 = b;
        }
 
        if (dp0 > 0){
             cout << "Sunny
";
        }
        else if (dp0 < 0){
              cout << "Aubrey
";
        }
        else{
            cout << "Draw
";
        }
            
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
       solve();
    }
 
    return 0;
}