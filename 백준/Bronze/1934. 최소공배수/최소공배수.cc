#include <bits/stdc++.h>
using namespace std;
int T;
pair<int, int> A[1004];
int gcd(pair<int, int> p){
    int v = max(p.first, p.second);
    int d = min(p.first, p.second);
    
    while(true){
        int tmp = v % d;
        
        if(tmp == 0) return d;
        
        v = d;
        d = tmp;
    }
}

int main(){
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> A[i].first;
        cin >> A[i].second;
        
        int GCD = gcd(A[i]);
        
        cout << max(A[i].first, A[i].second) / GCD * min(A[i].first, A[i].second) << '\n';
    }
  
    return 0;
}