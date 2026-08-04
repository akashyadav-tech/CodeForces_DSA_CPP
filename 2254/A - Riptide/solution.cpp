#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
   int a,b,c;
   cin>>a>>b>>c;
   int round=0;
 
   while(true){
    if(a==b || b==c || c==a){
        break;
    }
 
    if(a>b && a>c){
        a--;
    }
    else if(b>a && b>c){
        b--;
    }
    else if(c>a && c>b){
        c--;
    }
    
 
    if(a<b && a<c){
        a++;
    }
    else if(b<a && b<c){
        b++;
    }
    else if(c<a && c<b){
        c++;
    }
 
    round++;
   }
 
   cout<<round<<endl;
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