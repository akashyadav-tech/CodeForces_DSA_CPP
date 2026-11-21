#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int x, y, m;
        string s;
        cin >> x >> y >> m >> s;
 
        bool cur[105][105] = {};
        cur[x][y] = true;
 
        int ans = x + y;
 
        for (int i = 0; i < m; i++) {
            bool nxt[105][105] = {};
 
            for (int p = 0; p <= 100; p++) {
                for (int q = 0; q <= 100; q++) {
                    if (!cur[p][q]) continue;
                    if (p + q == 0) continue;
 
                    if (s[i] == '+') {
                        if (p > 0) nxt[p - 1][q + 1] = true;
                        if (q > 0) nxt[p][q + 1] = true;
                    } else {
                        if (q > 0) nxt[p + 1][q - 1] = true;
                        if (p > 0) nxt[p - 1][q] = true;
                    }
                }
            }
 
            for (int p = 0; p <= 100; p++) {
                for (int q = 0; q <= 100; q++) {
                    if (nxt[p][q]) ans = max(ans, p + q);
                    cur[p][q] = nxt[p][q];
                }
            }
        }
 
        cout << ans << "
";
    }
 
    return 0;
}