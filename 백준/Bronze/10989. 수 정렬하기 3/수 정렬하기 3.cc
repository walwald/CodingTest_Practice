#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> t(10001, 0);
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n;
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        t[tmp]++;
    }
    
    for(int i =0; i < 10001; i++){
        if(t[i] > 0){
            for(int j = 0; j < t[i]; j++){
                cout << i << '\n';
            }
        }
    }
    
    return 0;
}