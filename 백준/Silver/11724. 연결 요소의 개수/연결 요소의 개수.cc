#include <bits/stdc++.h>
using namespace std;
int n, e;
int ret;
vector<bool> v(1004, false);
vector<vector<int> > nlist;
void dfs(int node){
    if(v[node] == true) return;
    
    v[node] = true;
    
    for(int i : nlist[node]){
        if(v[i] == false){
            dfs(i);
        }
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n >> e;
    nlist.resize(n+1);
    
    for(int i = 0; i < e; i++){
        int from, to;
        cin >> from >> to;
        nlist[from].push_back(to);
        nlist[to].push_back(from);
    }
    
    for(int i = 1; i < n + 1; i++){
        if(v[i] == false){
            ret++;
            dfs(i);
        }
    }
    
    cout << ret << '\n';
    
    return 0;
}