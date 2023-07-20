#include <bits/stdc++.h>
using namespace std;
string str;
bool ret;
int main(){
    ret = 1;
    cin >> str;
    for(int i = 0; i < str.size()/2; i++){
        if(str[i] != str[str.size() - i -1]) {
            ret = 0;
            break;
        }
    }
    
    cout << ret << '\n';
    return 0;
}