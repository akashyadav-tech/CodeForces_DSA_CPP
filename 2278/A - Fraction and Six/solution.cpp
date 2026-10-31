#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        int n, m;
        cin >> n >> m;
 
        string s1, s2;
        cin >> s1 >> s2;
 
        unordered_map<char,int> mp;
 
        for(int i = 0; i < n; i++) {
            mp[s1[i]]++;
        }
 
        for(int i = 0; i < m; i++) {
            mp[s2[i]]--;
        }
 
        if(mp['s'] == 1 && mp['i'] == 1 && mp['x'] == 1) {
            bool flag = true;
 
            for(auto it : mp) {
                if(it.second != 0 && it.first != 's' && it.first != 'i' && it.first != 'x') {
                    flag = false;
                    break;
                }
            }
 
            if(flag) cout << "YES
";
            else cout << "NO
";
        }
        else {
            cout << "NO
";
        }
    }
 
    return 0;
}