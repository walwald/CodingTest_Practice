#include <bits/stdc++.h>
using namespace std;
int N, M;
int A[1000004];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> N >> M;
    for(int i = N; i <= M; i++){
        A[i] = i;
    }
    
    A[1] = 0;
    
    for(int i = 2; i <= sqrt(M); i++){
        for(int j = N; j <= M; j++){
            if(A[j] == 0) continue;
            if(A[j] > i && A[j] % i == 0){
                A[j] = 0;
            }
        }
    }
    
    for(int i = N; i <= M; i++){
        if(A[i]) cout << i << '\n';
    }
    
}