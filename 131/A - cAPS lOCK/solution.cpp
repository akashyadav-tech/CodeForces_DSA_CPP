#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s;
    cin >> s;
    string temp = s;
 
    transform(s.begin(), s.end(), s.begin(), ::toupper);
 
    if(s == temp){
     
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s;
    }
    else if(islower(temp[0]) && temp.substr(1) == s.substr(1)){
  
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s[0] = toupper(s[0]);
        cout << s;
    }
    else{
  
        cout << temp;
    }
 
    return 0;
}