#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int m,n;
    cin>>m>>n;
    int flag=0;
    for(int i=0; i<m;i++){
      if(i%2==0){
        for(int j=0; j<n;j++){
            cout<<'#';
        }
      }
      else{
        if(flag==0){
            for(int j=0;j<n-1;j++){
                cout<<'.';
            }
            cout<<'#';
            flag=1;
        }
        else{
           cout<<'#'; 
            for(int j=0;j<n-1;j++){
                cout<<'.';
            }
            flag=0;
        }
      }
      cout<<"
";
    }
    return 0;
}