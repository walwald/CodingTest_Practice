#include <bits/stdc++.h>
using namespace std;
int N, M;
int P[1000004];
int find(int n){
    if(P[n] == n){
        return n;
    } else {
        return P[n] = find(P[n]);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> N >> M;
    
    for(int i = 0; i < N + 1; i++){
        P[i] = i;
    }
    
    for(int i = 0; i < M; i++){
        int Q, a, b;
        cin >> Q >> a >> b;
        
        if(Q == 0){
            P[a] = find(a);
            P[find(b)] = P[a];
        } else {
            if(find(a) == find(b)){
                cout << "yes" << '\n';
            } else{
                cout << "no" << '\n';
            }
        }
    }
    return 0;
}