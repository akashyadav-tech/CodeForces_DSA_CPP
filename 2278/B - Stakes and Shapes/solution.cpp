#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        int x, y, z;
        cin >> x >> y >> z;
 
        int n = x + y + z;
 
        if(y >= z) {
            cout << string(n, 'R') << "
";
        }
        else if(z >= x) {
            cout << string(n, 'S') << "
";
        }
        else {
            cout << string(n, 'P') << "
";
        }
    }
 
    return 0;
}