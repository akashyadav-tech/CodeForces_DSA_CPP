#include<bits/stdc++.h>
using namespace std;
 
void solve(int &ans){
    string s;
    cin>>s;
 
    if(s=="X++" || s=="++X"){
       ans++;
    }
    else{
        ans--;
    }
}
 
int main() {
    int t;
    cin>>t;
    int ans=0;
    while(t--) {
        solve(ans);
    }
 
    cout<<ans;
    return 0;
}