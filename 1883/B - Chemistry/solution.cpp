#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        string s;
        cin >> s;
 
        vector<int> freq(26, 0);
 
        for (char ch : s)
            freq[ch - 'a']++;
 
        int odd = 0;
        for (int x : freq) {
            if (x % 2)
                odd++;
        }
 
        int need = (n - k) % 2;
 
        if (odd - k <= need)
            cout << "YES
";
        else
            cout << "NO
";
    }
 
    return 0;
}