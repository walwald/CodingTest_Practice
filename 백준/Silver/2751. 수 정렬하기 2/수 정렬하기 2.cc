#include <bits/stdc++.h>
using namespace std;
int n;
int a[1000004];
int main(){
    cin >> n;
    for(int i =0; i < n; i++){
        cin >> a[i];
    }
    
    sort(a, a+n);
    
    for(int i =0; i < n; i++){
        cout << a[i] << '\n';
    }
    
    return 0;
}