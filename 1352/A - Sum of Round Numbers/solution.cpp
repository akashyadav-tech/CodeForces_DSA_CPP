#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        int len = n.size();
        vector<long long> ans;
 
        for (int i = 0; i < len; i++) {
            if (n[i] != '0') {
                int digit = n[i] - '0';
                int power = len - 1 - i;
 
                long long val = digit;
                for (int p = 0; p < power; p++)
                    val = val * 10;
 
                ans.push_back(val);
            }
        }
 
        cout << ans.size() << "
";
        for (long long x : ans)
            cout << x << " ";
        cout << "
";
    }
    return 0;
}