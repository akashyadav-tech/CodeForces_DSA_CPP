#include <bits/stdc++.h>
using namespace std;
 
int main(){
   int n;
   cin>>n;
 
   vector<int> arr(7);
   
   for(int i=0; i<7;i++){
    cin>>arr[i];
   }
 
   int i=0;
 
   while(true){
    if(i==7){
        i=0;
    }
      n -= arr[i];     
 
       if(n <= 0){     
           cout << i + 1;
           return 0;
       }
 
     i++;
   }
   
    return 0;
}