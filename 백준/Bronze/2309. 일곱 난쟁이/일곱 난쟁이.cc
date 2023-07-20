#include <bits/stdc++.h>
using namespace std;
vector<int> a(9, 0);

int main() {
    for(int i = 0; i <9; i++) cin >> a[i];
    
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < i; j++){
            if(accumulate(a.begin(), a.end(), 0) - a[i] - a[j] == 100){
                a.erase(a.begin() + i);
                a.erase(a.begin() + j);
            } 
        }
    }
    
    sort(a.begin(), a.end());
    for(int i : a) cout << i << '\n';
    
    return 0;
}