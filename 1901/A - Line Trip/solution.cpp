#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n, x;
    cin >> n >> x;
 
    vector<int> arr(n);
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    int maxi=INT_MIN;
 
    maxi=max(maxi,abs(arr[0]));
 
    for(int i=0; i<n-1;i++){
        maxi=max(maxi,abs(arr[i+1]-arr[i]));
    }
 
    maxi=max(maxi,2*abs(x-arr[n-1]));
 
 
    cout<<maxi<<"
";
 
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