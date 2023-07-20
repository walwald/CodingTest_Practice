#include <bits/stdc++.h>
using namespace std;
map<char, int> mp;
string s;
int main(){
    for(int i = 0; i < 26; i++){
        mp.insert({(char)(97 + i), 0});
    }
    
    cin >> s;
    
    for(char c : s){
        mp[c]++;
    }
    
    for(auto a : mp){
        cout << a.second << ' ';
    }
    
    return 0;
}