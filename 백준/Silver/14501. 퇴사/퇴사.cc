#include <bits/stdc++.h>
using namespace std;
int N;
int D[17], T[17], P[17];
int main(){
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> T[i] >> P[i];
    }
    
    for(int i = N; i > 0; i--){
        if(i + T[i] > N + 1){
            D[i] = D[i + 1];
            continue;
        }
        D[i] = max(D[i + 1], D[i + T[i]] + P[i]);
    }
    
    cout << D[1] << '\n';
    
    return 0;
}