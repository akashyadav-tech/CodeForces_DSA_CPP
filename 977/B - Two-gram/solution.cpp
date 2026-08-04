#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    int cnt = 0;
    string ans = "";
 
    for (int i = 0; i < n - 1; i++)
    {
        string temp = "";
        temp += s[i];
        temp += s[i + 1];
 
        int lt = 0;
        for (int j = 0; j < n - 1; j++)
        {
            string temp1 = "";
            temp1 += s[j];
            temp1 += s[j + 1];
 
            if (temp1 == temp)
            {
                lt++;
            }
        }
        if (lt > cnt)
        {
            cnt = lt;
            ans = temp;
        }
    }
    cout << ans;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    //    cin>>t;
 
    while (t--)
    {
        solve();
    }
 
    return 0;
}