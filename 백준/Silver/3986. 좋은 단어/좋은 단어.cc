#include <bits/stdc++.h>
using namespace std;
int n, ret;
string s;
int main(){
    cin >> n;
    for(int i =0; i < n; i++){
        cin >> s;
        stack<char> st;
        for(char c : s){
            if(!st.size()) st.push(c);
            else if(c == st.top()) st.pop();
            else st.push(c);
        }
        
        if(!st.size()) ret++;
    }
    
    cout << ret << '\n';
    
    return 0;
}