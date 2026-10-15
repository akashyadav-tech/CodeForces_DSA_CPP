#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        string s;
        cin >> s;
 
        int ans = 1;
        bool inc = false, dec = false;
 
        for(int i = 1; i < s.size() - 1; i++) {
            if(s[i-1] == s[i+1]) {
                if(s[i] == s[i-1]){
                     inc = true;
                }
             else{
                     dec = true;
                }
                   
            }
        }
 
        ans += inc + dec;
        cout << ans << "
";
    }
 
    return 0;
}