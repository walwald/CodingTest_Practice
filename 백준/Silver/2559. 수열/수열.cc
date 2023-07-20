#include <bits/stdc++.h>
using namespace std;
int n, k, tmp, mx = -10000004, sum;
int ps[10000004];

int main(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> tmp;
        ps[i] = ps[i - 1] + tmp;
    }
    
    for(int i = n; i >= k; i--){
        sum = ps[i] - ps[i - k];
        mx = max(mx, sum);
    }
    

    cout << mx << '\n';
    
    return 0;
}