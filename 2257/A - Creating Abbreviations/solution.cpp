#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int a, b;
    cin >> a >> b;
    string ans = "YES";
    bool flag=false;
 
    set<char> st;
    while (a--)
    {
        string temp;
        cin >> temp;
 
        st.insert(toupper(temp[0]));
    }
 
    while (b--)
    {
        string temp;
        cin >> temp;
 
          if (flag) {
            continue;
          }
 
        for(char ch:temp){
            ch=toupper(ch);
           if (st.find(ch) == st.end())
        {
           ans="NO";
           flag=true;
           break;
        }
        
        }
   if (!flag){
         st.insert(toupper(temp[0]));
   }
       
        
    }
 
    cout<<ans;
 
    cout<<"
";
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
 
    while (t--)
    {
        solve();
    }
    return 0;
}