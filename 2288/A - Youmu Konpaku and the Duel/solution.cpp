#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int k = 1;
        while (true) {
            int best = 0;
            for (int a = 1; a <= k; a++) {
                int c = k - a;
                if (a > c + 1){
                   continue; 
                } 
                best = max(best, a * (c + 1) - a * (a - 1) / 2);
            }
            if (best >= x) {
                break;
            }
            k++;
        }
        cout << k << "
";
    }
    return 0;
}