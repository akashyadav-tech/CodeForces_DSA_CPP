#include <bits/stdc++.h>
using namespace std;
 
void solve(){
       int n;
        string s;
        cin >> n >> s;
 
        bool flag = false;
 
        if (n % 2 == 0) {
            for (int i = 0; i < n - 1; i++) {
                if (s[i] == s[i + 1]) {
                    flag = true;
                    break;
                }
            }
        }
 
        if (flag){
             cout << "YES" << endl;
        }
        else{
             cout << "NO" << endl;
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