#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
 
    while(t--) {
 
        int a, b;
        cin >> a >> b;
 
        int kx, ky;
        cin >> kx >> ky;
 
        int qx, qy;
        cin >> qx >> qy;
 
        int dx[8] = {a, a, -a, -a, b, b, -b, -b};
        int dy[8] = {b, -b, b, -b, a, -a, a, -a};
 
        set<pair<int,int>> king;
        set<pair<int,int>> queen;
 
        for(int i = 0; i < 8; i++) {
            king.insert({kx + dx[i], ky + dy[i]});
            queen.insert({qx + dx[i], qy + dy[i]});
        }
 
        int ans = 0;
 
        for(auto p : queen) {
            if(king.count(p)) {
                ans++;
            }
        }
 
        cout << ans << endl;
    }
 
    return 0;
}