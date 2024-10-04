#include <bits/stdc++.h>
using namespace std;
int N;
string S;
int main(){
    cin >> N >> S;
    int res = 0;
    for(int i = 0; i < N; i++){
        res += S[i] - '0';
    }
    
    cout << res << '\n';
    
    return 0;
}