#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int x, y, z;
        cin>>x>>y>>z;
        if(x>y){
                      swap(x,y); 
        }
        if(x>z){
             swap(x, z);
        }
           
        if(y>z){
             swap(y,z);
        }
           
        if(z>x+y){
            z=x+y;
        }
        cout << z - x << endl;
}
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}