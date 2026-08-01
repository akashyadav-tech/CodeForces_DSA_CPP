#include <bits/stdc++.h>
using namespace std;
 
void solve( unordered_map<string,int> &mp){
    string s;
    cin>>s;
   
    mp[s]++;
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int maxi=INT_MIN;
    string winner="";
 
   int t;
   cin>>t;
   unordered_map<string,int> mp;
 
   while(t--){
    solve(mp);
   }
 
   for(auto it:mp){
    
    if(it.second>maxi){
        maxi=it.second;
        winner=it.first;  
    }
   }
 
   cout<<winner;
 
    return 0;
}