#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    string s;
    cin>>s;
    int left=-1;
    int right=-1;
 
    for(int i=0;i<s.length();i++){
        if(s[i]-'0'==1){
            left=i;
            break;
        }
    }
 
     for(int i=s.length()-1;i>=0;i--){
        if(s[i]-'0'==1){
            right=i;
            break;
        }
    }
 
    int cnt=0;
if(left != -1){         
        for(int i=left;i<=right;i++){
            if(s[i]-'0'==0){
                cnt++;
            }
        }
    }
    cout<<cnt;
 
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