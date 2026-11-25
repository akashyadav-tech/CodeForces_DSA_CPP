#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<long long> a(n);
    long long sum = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
 
    if (sum % 3 != 0) {
        cout << 0;
        return 0;
    }
 
    long long target = sum / 3;
    long long prefix = 0, count = 0, ans = 0;
 
    for (int i = 0; i < n - 1; i++) {
        prefix += a[i];
 
        if (prefix == 2 * target)
            ans += count;
 
        if (prefix == target)
            count++;
    }
 
    cout << ans;
    return 0;
}