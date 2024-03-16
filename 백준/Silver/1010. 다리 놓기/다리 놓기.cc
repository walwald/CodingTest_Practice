#include <bits/stdc++.h>
using namespace std;
int T;
int D[34][34];
int main(){
    cin >> T;
    for(int i = 0; i <= 30; i++){
        D[i][0] = 1;
        D[i][i] = 1;
        D[i][1] = i;        
    }
    
    for(int i = 1; i <= 30; i++){
        for(int j = 2; j < i; j++){
            D[i][j] = D[i - 1][j] + D[i -1][j-1];
        }
    }
    
    for(int i = 0; i < T; i++){
        int a, b;
        cin >> a >> b;
        cout << D[b][a] << '\n';
    }
    
    return 0;
}