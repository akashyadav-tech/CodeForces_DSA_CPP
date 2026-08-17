#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int n;
   cin>>n;
   
   vector<int> arr(n);
   for(int i=0; i<n;i++){
    cin>>arr[i];
   }
   int ans=1;
   int cnt=1;
   
   for(int i=0; i<n-1;i++){
    if(arr[i+1]>arr[i]){
    cnt++;
  
    }
    else{
        cnt=1;
       
    }
 
       ans=max(ans,cnt);
   }
 
   cout<<ans;
    return 0;
}