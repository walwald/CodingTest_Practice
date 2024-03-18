#include <bits/stdc++.h>
using namespace std;
int N, M, K, X, dist;
vector<int> V[300004];
int D[300004], visited[300004];
void bfs(int x){
    queue<int> q;
    q.push(x);
    while(q.size()){
        int now = q.front();
        q.pop();
        if(visited[now]) return;
        visited[now] = true;
        
        for(int i : V[now]){
            if(!D[i] && !visited[i]){
                D[i] = D[now] + 1;
                q.push(i);
            }
        }
    }
}

int main(){
    cin >> N >> M >> K >> X;
    
    for(int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        V[a].push_back(b);
    }
    
    bfs(X);
    bool ret = false;
    for(int i = 1; i <= N; i++){
        if(D[i] == K){
            ret = true;
            cout << i << '\n';
        }
    }
    
    if(!ret) cout << -1 << '\n';
    
    return 0;
}