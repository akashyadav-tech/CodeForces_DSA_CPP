#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        
        long long D = a - b;
        long long ans;
        
        if (D >= 0) {
            ans = D + c;
        } else {
            long long E = -D;
            if (c <= 2 * E) {
                ans = E;
            } else {
                ans = c - E;
            }
        }
        
        cout << ans << "
";
    }
    
    return 0;
}