#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
 
    int groups = 0;
    int prev = 0;
 
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
 
        if (x != 0 && prev == 0)
        {
            groups++;
        }
 
        prev = x;
    }
 
    if (groups == 0)
    {
        cout << 0 << "
";
    }
    else if (groups == 1)
    {
        cout << 1 << "
";
    }
    else
    {
        cout << 2 << "
";
    }
}
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        solve();
    }
 
    return 0;
}