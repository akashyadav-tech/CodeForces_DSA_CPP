#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  int cnt=0;
 
  for(int i=1; i<n;i++){
    if(s[i]!=s[i-1]){
        cnt++;
    }
  }
  int maxi=0;
 
  for(int i=1;i<n-1;i++){
    if(s[i]!=s[i-1]  && s[i] != s[i+1]){
        if(s[i-1]==s[i+1]){
            maxi=max(maxi,2);
        }
        else{
            maxi=max(maxi,1);
        }
    }
  }
 cout<<cnt-maxi+1;
  cout<<"
";
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
       cin>>t;
 
    while (t--)
    {
        solve();
    }
 
    return 0;
}