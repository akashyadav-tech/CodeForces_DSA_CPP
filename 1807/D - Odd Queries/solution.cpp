#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    long long n,q;
    cin>>n>>q;
 
    vector<long long> arr(n);
    vector<long long> pre(n+1,0);
 
    for(long long i=0;i<n;i++){
        cin>>arr[i];
        pre[i+1]=pre[i]+arr[i];
    }
 
    long long total=pre[n];
 
    while(q--){
        long long l,r,k;
        cin>>l>>r>>k;
 
        long long sum=total-(pre[r]-pre[l-1])+(r-l+1)*k;
 
        if(sum%2==0)
            cout<<"NO
";
        else
            cout<<"YES
";
    }
}
 
int main()
{
    long long t;
    cin >> t;
 
    while (t--)
    {
       solve();
    }
 
    return 0;
}