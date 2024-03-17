#include <bits/stdc++.h>
using namespace std;
int N;
long long D[1004];
int main(){
    cin >> N;
    
    D[1] = 1;
    D[2] = 2;
    
    for(int i = 3; i <= N; i++){
        D[i] = (D[i - 2] + D[i - 1]) % 10007;
    }
    
    cout << D[N] << '\n';
    
    return 0;
}