#include <bits/stdc++.h>
using namespace std;
int N;
int main(){
    cin >> N;
    int res = 0;
    for(int i = 5; i <= N; i *= 5){
        res += N/i;
    }
    
    cout << res << '\n';
    
    return 0;
}