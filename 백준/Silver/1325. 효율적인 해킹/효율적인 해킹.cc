#include <bits/stdc++.h>
using namespace std;
int N, M, cnt;
vector<int> P[10004];
bool visited[10004];
int D[10004];
void dfs(int n){
    if(visited[n]) return;
    visited[n] = true;
    cnt++;
    
    for(int i : P[n]){
        if(!visited[i]){
            dfs(i);
        }
    }
}

int main(){
    cin >> N >> M;
    for(int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        P[b].push_back(a);
    }
    
    for(int i = 1; i <= N; i++){
        cnt = 0;
        fill(&visited[1], &visited[N + 1], false);
        dfs(i);
        D[i] = cnt;
    }
    
    int mx = 0;
    for(int i = 1; i <= N; i++){
        if(D[i] > D[mx]){
            mx = i;
        }
    }
    
    for(int i = 1; i <= N; i++){
        if(D[i] == D[mx]){
            cout << i << ' ';
        }
    }
    
    return 0;
}