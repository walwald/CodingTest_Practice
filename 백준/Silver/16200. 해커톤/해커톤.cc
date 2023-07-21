#include <bits/stdc++.h>
using namespace std;

int mi, ret, n, tmp;

int main() {
    cin >> n;
    vector<int> v(n, 0);
    for(int i =0; i < n; i++){
        cin >> tmp;
        v[i] = tmp;
    }

    sort(v.begin(), v.end(), greater<int>());
    
    for(int i = n - 1; i >= 0; i--){
        mi = v[i];
        while(mi > 1){
            mi--;
            i--;
        }
        ret++;
    }
    
    cout << ret << '\n';
    
    return 0;
}