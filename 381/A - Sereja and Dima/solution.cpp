#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int n;
   cin>>n;
 
   vector<int> arr(n);
 
 
   for(int i=0; i<n;i++){
    cin>>arr[i];
   }
 
   int a=0;
   int b=0;
 
   bool flag=true;
 
   int i=0;
   int j=n-1;
 
   while(i<=j){
    if(arr[i]>arr[j]){
        if(flag){
            a+=arr[i];
            flag=false;
        }
        else{
            b+=arr[i];
            flag=true;
        }
 
        i++;
    }
    else{
       if(flag){
            a+=arr[j];
            flag=false;
        }
        else{
            b+=arr[j];
            flag=true;
        }
 
        j--; 
    }
   }
 
   cout<<a<<" "<<b<<"
";
    return 0;
}