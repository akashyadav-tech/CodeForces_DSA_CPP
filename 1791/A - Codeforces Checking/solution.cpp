#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    char ch;
    cin>>ch;
    string s="codeforces";
 
    if (s.find(ch) != string::npos) {
    cout << "YES
";
} else {
    cout << "NO
";
}
 
   
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
 
   int t;
   cin>>t;
   
 
   while(t--){
    solve();
   }
 
 
 
    return 0;
}