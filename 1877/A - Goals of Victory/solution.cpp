#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
  long long n;
        cin >> n;
        long long a[n]; 
        for (long long i = 0; i < n - 1; i++)
            cin >> a[i];
 
        long long sum = 0;
        for (long long i = 0; i < n - 1; i++)
            sum += a[i];
 
        cout << -1 * sum << endl;
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