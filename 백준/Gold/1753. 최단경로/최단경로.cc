#include <bits/stdc++.h>
using namespace std;
int V, E, K;
vector<pair<int, int>> G[20004];
int ret[20004];
bool visited[20004];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;

int main(){
    cin >> V >> E >> K;
    for(int i = 0; i < E; i++){
        int u, v, w;
        cin >> u >> v >> w;
        G[u].push_back(make_pair(v, w));
    }
    
    for(int i = 1; i <= V; i++){
        ret[i] = 1e8;
    }
    
    q.push(make_pair(0, K));
    ret[K] = 0;
    while(q.size()){
        pair<int, int> nowV = q.top();
        int now = nowV.second;
        q.pop();
        if(visited[now]) continue;
        visited[now] = true;
        
        for(auto it: G[now]){
            int next = it.first;
            if(ret[next] > ret[now] + it.second){
                ret[next] = ret[now] + it.second;
                q.push(make_pair(ret[next], next));
            }
        }
    }
    
    for(int i = 1; i <= V; i++){
        if(ret[i] == 1e8){
            cout << "INF" << "\n";
        } else {
            cout << ret[i] << '\n';
        }
    }
    
    return 0;
}