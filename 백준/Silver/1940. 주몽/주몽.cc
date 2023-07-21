#include <bits/stdc++.h>
using namespace std;
int n, m, id[15004], ret;

int main(){
    cin >> n;
    cin >> m;
    for(int i =0; i < n; i++){
        cin >> id[i];
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if(id[i] + id[j] == m) ret++; 
        }
    }
    
    cout << ret <<"\n";
    
    
    return 0;
}