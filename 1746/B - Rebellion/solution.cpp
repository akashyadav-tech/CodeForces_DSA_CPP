#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
 
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
 
    int cnt=0;
 
    for(int i=0; i<n;i++){
        if(arr[i]==0 ){
                cnt++;  
        }
    }
 
 
    int ans=0;
    for(int i=0; i<cnt;i++){
        if(arr[i]==1){
            ans++;
        }
    }
 
    cout<<ans<<"
";
}
 
int main() {
  int t;
  cin>>t;
 
  while(t--){
    solve();
  }
    return 0;
}