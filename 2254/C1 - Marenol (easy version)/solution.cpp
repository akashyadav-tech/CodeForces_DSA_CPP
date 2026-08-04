#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
  int n;
  cin>>n;
  string a,b;
  cin>>a>>b;
  int a_odd_cnt=0;
  int a_even_cnt=0;
  int b_odd_cnt=0;
  int b_even_cnt=0;
 
  for(int i=0; i<n;i++){
    if(a[i]=='1'){
       if(i%2==0){
        a_even_cnt++;
       }
       else{
        a_odd_cnt++;
       }
    }
 
    if(b[i]=='1'){
       if(i%2==0){
        b_even_cnt++;
       }
       else{
        b_odd_cnt++;
       }
    }
 
  }
 
  if((a_even_cnt==b_even_cnt) && (a_odd_cnt==b_odd_cnt)){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
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