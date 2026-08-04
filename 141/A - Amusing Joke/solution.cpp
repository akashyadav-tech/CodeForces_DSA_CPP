#include <bits/stdc++.h>
using namespace std;
 
void solve(){
string s1,s2,s;
cin>>s1>>s2>>s;
 
string temp=s1+s2;
sort(temp.begin(),temp.end());
sort(s.begin(),s.end());
 
if(s==temp){
    cout<<"YES";
}
else{
    cout<<"NO";
}
 
   
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
 
   int t=1;
//    cin>>t;
   
 
   while(t--){
    solve();
   }
 
 
 
    return 0;
}