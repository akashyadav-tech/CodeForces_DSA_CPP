#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        string s;
        cin >> s;
 
        int answer = 0;
 
        for (int i = 0; i < n; i += k) {
            bool one = true;
 
            for (int j = i; j < i + k; j++) {
                if (s[j] == '0') {
                    one = false;
                    break;
                }
            }
 
            if (one) {
                answer++;
            }
        }
 
        cout << answer << endl;
    }
 
    return 0;
}