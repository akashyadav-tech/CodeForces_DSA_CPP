#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int testCases;
    cin >> testCases;
 
    while (testCases--) {
        int n;
        cin >> n;
 
        int oddCount = 0;
        int evenGroupA = 0;  
        int evenGroupB = 0;  
 
        for (int i = 0; i < n; i++) {
            long long value;
            cin >> value;
 
            if (value % 2 == 1) {
                oddCount++;
            } else if (value % 4 == 0) {
                evenGroupA++;
            } else {
                evenGroupB++;
            }
        }
 
        int ans = max({oddCount, evenGroupA, evenGroupB});
        cout << ans << '
';
    }
 
    return 0;
}