#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int k;
    cin >> k;
 
    string s;
    cin >> s;
 
    vector<int> freq(26, 0);
    for(char ch : s){
        freq[ch - 'a']++;
    }
 
   
    for(int i = 0; i < 26; i++){
        if(freq[i] % k != 0){
            cout << -1;
            return 0;
        }
    }
 
    string base = "";
    for(int i = 0; i < 26; i++){
        base += string(freq[i] / k, 'a' + i);
    }
 
    string result = "";
    for(int i = 0; i < k; i++){
        result += base;
    }
 
    cout << result;
    return 0;
}