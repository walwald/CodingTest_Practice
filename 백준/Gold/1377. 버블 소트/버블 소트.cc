#include <bits/stdc++.h>
using namespace std;
int n;
pair<int, int> a[1000004];
int main(){
    cin >> n;
    for(int i =0; i <n; i++){
        cin >> a[i].first;
        a[i].second = i;
    }
    
    sort(a, a + n);
    int max = 0;
    for(int i =0; i < n; i++){
        if(a[i].second - i > max){
            max = a[i].second - i;
        }
    }    
    cout << max + 1 << '\n';
    
    return 0;
}