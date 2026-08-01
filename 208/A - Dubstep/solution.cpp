#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
   string s;
   cin>>s;
   string word="WUB";
 
    int pos = 0;
    while ((pos = s.find(word, pos)) != string::npos) {
        s.replace(pos, word.length(), " ");
    }
 
    stringstream ss(s);
    string w, result = "";
    while (ss >> w) {
        if (!result.empty()){
           result += " "; 
        } 
        result += w;
    }
 
    cout << result << endl;
 
    return 0;
}