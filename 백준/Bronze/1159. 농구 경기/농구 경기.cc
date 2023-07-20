#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> cnt(26,0);
string name;
vector<char> ret;
bool tf = 0;
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> name;
        cnt[name[0] - 'a']++;
    }
    
    
    for(int i = 0; i < 26; i++){
        if(cnt[i] > 4) {
            ret.push_back((char)(i + 'a'));
            tf = 1;
        }
    }
    
    if(tf) {
        sort(ret.begin(), ret.end());
        for(char a : ret){
            cout << a;
        }
        cout << '\n';
    } else {
        cout << "PREDAJA\n";
    }
    
    return 0;
}