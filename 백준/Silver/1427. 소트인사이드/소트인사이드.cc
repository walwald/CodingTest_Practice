#include <bits/stdc++.h>
using namespace std;
string s;
int main(){
    cin >> s;
    for(int i =0; i < s.size(); i++){
        char maxIdx = i;
        for(int j =i; j < s.size(); j++){
            if(s[j] > s[maxIdx]){
                maxIdx = j;
            }
        }
        
        char tmp = s[i];
        s[i] = s[maxIdx];
        s[maxIdx] = tmp;
    }    
    
    cout << s << '\n';
        
    return 0;
}