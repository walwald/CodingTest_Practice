#include <bits/stdc++.h>
using namespace std;
int N, M;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
    cin >> N >> M;

    int S[N + 1];
    for(int i = 1; i <= N; i++){
        int k;
        cin >> k;
        S[i] = S[i - 1] + k;
    }
    
    for(int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        cout << S[b] - S[a - 1] << '\n';
    }
    
    return 0;
}