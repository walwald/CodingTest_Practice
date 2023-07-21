#include <bits/stdc++.h>
using namespace std;
int n, m;
map<string, int> cl;
string name, ct;

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        int ret = 1; 
        cin >> m;
        for(int j = 0; j < m; j++){
            cin >> name >> ct;
            
            if(cl.find(ct) == cl.end()){
                cl[ct] = 1;
            } else cl[ct]++;
        }
        
        for(auto a : cl){
            ret *= (a.second + 1);
        }
        cout << ret - 1 << '\n';
        
        cl.clear();
    }
    
    return 0;
}