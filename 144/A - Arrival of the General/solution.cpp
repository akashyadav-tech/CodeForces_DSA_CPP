#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int n;
   cin>>n;
   vector<int> arr(n);
 
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
 
   int maxi = *max_element(arr.begin(), arr.end());
   int mini= *min_element(arr.begin(), arr.end()); 
 
   int pos_max;
   int pos_min;
 
   for(int i=0; i<n;i++){
    if(arr[i]==maxi){
        pos_max=i;
        break;
    }
   }
 
     for(int i=n-1; i>=0;i--){
    if(arr[i]==mini){
        pos_min=i;
        break;
    }
   }
 
   int ans= pos_max + (n - 1 - pos_min);
 
   if(pos_min < pos_max){
    ans-=1;
   }
 
   cout<< ans;
      cout<<"
";
    
    return 0;
}