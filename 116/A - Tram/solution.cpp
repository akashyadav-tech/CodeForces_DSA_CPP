#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int current = 0; 
    int maxCapacity = 0;
 
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
 
        current -= a;         
        current += b;       
        maxCapacity = max(maxCapacity, current); 
    }
 
    cout << maxCapacity << "
";
    return 0;
}