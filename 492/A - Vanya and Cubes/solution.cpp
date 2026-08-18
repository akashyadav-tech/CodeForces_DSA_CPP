#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int lvl = 0;
    int prev = 0;
    int i = 1;
 
    while (true) {
        int temp = prev + i;
 
        if (n < temp)
            break;
 
        n -= temp;
        prev = temp;
        lvl++;
        i++;
    }
 
    cout << lvl;
 
    return 0;
}