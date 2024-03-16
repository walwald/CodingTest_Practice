#include <bits/stdc++.h>
using namespace std;
int M, N;
int A[1000004];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> M >> N;
    for(int i = 2; i <= N; i++){
        A[i] = i;
    }
    
    for(int i = 2; i <= sqrt(N); i++){
        if(A[i] == 0) continue;
        for(int j = i + i; j <= N; j += i){
            A[j] = 0;
        }
    }
    
    for(int i = M; i <= N; i++){
        if(A[i]) cout << i << '\n';
    }
    
    
    return 0;
}