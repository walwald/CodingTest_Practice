#include <bits/stdc++.h>
using namespace std;
int N, K;
int main(){
    cin >> N >> K;
    int m = 0;
    vector<int> A(N + 1);
    
    for(int i = 0; i <= N; i++){
        A[i] = i;
    }
    
    for(int i = 2; i <= N; i++){
        for(int j = 1; j <= N/i; j++){
            if(A[i * j] != 0){
                A[i*j] = 0;
                m++;
                if(m == K) {
                    cout << i * j;
                    return 0;
                }
            } else {
                continue;
            }
        }
        
    }
    
    
    return 0;
}