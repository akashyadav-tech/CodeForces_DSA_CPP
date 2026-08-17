#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long a, b, n;
        cin >> a >> b >> n;
 
        int count = 0;
 
        while (a <= n && b <= n) {
            if (a < b)
                a += b;
            else
                b += a;
 
            count++;
        }
 
        cout << count << '
';
    }
 
    return 0;
}