#include <bits/stdc++.h>
using namespace std;
int N, S, E, R, cnt;
vector< vector<int> > A;
vector<bool> visited; 
void DFS(int v, int lvl){
    if(visited[v]){
        return;
    }
    
    visited[v] = true;
    
    if(v == E){
        cout << lvl;
        return;
    }
    
    for(int i : A[v]){
        if(visited[i] == false){
            DFS(i, lvl + 1);
        }
    }
}

int main(){
    cin >> N >> S >> E;
    A.resize(N + 1);
    visited = vector<bool>(N+1, false);
    
    cin >> R;
    for(int i = 0; i < R; i++){
        int a, b;
        cin >> a >> b;
        A[a].push_back(b);
        A[b].push_back(a);
    }
    
    DFS(S, 0);
    cnt = -1;
    
    if(visited[E] == false){
        cout << -1;
    }
    
    return 0;
}