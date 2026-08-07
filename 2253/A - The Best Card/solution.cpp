#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    bool temp = false;
    
    int i = n + 1;
    bool flag = true;
    
    for(int j = 2; j <= n+1; j++){
        if(i != j){
            if(i%j == 0 || j%i == 0){
                int winner = min(i, j);
                if(winner != i){
                    flag = false;
                    break;
                }
            }
            else{
                int winner = max(i, j);
                if(winner != i){
                    flag = false;
                    break;
                }
            }
        }
    }
    
    if(flag){
        temp = true;
    }
 
    if(temp){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    cout << "
";
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