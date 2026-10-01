#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
 
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
 
    vector<int> temp=arr;
    sort(temp.begin(),temp.end());
 
    for(int i=0; i<n;i++){
        if((arr[i]%2==0 && temp[i]%2!=0) || (arr[i]%2!=0 && temp[i]%2==0)){
            cout<<"no"<<"
";
            return ;
        }
    }
 
    cout<<"yes";
    cout<<"
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