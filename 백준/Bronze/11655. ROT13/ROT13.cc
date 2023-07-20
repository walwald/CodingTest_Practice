#include <bits/stdc++.h>
using namespace std;
string str, ret;

int main(){
    getline(cin, str);
    for(int i = 0; i < str.size(); i++){
        if(str[i] >= 65 && str[i] <= 90){
            if(str[i] + 13 <= 90)ret += str[i] + 13;
            else ret += str[i] - 13;
        }else if(str[i] >= 97 && str[i] <= 122){
            if(str[i] + 13 <= 122)ret += str[i] + 13;
            else ret += str[i] - 13;
            
        } else ret += str[i];
    }
    
    cout << ret << '\n';
    
    return 0;
}