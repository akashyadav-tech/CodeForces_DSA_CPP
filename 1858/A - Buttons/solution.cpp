#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int x,y,z;
    cin>>x>>y>>z;
 
    if(x>y){
        cout<<"First";
    }
    else if(y>x){
        cout<<"Second";
    }
    else{
        if(z%2==0){
            cout<<"Second";
        }
        else{
            cout<<"First";
        }
    }
 
    cout<<"
";
}
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
       solve();
        
    }
 
    return 0;
}