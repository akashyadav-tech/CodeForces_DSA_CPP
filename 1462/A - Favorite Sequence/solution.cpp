#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
 
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
 
    int i=0;
    int j=n-1;
 
    while(i<=j){
        if(i==j){
            cout<<arr[i];
            break;
        }
 
        cout<<arr[i]<<" "<<arr[j]<<" ";
 
        i++;
        j--;
    }
 
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