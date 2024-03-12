#include <bits/stdc++.h>
using namespace std;
int N, M;
vector<int> friends[2004];
bool inLine[2004];
bool ret = false;
void DFS(int p, int count){
    if(inLine[p]) return;
    if(count == 5){
        ret = true;
        return;
    }
    inLine[p] = true;
    for(int i : friends[p]){
        DFS(i, count + 1);
    }
    
    inLine[p] = false;
    return;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> N >> M;
    for(int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        friends[a].push_back(b);
        friends[b].push_back(a);
    }
    
    for(int i = 0; i < N; i++){
        if(ret == true) break;
        DFS(i, 1);
    }
    
    if(ret) {
        cout << 1 << '\n';
    } else {
        cout << 0 << '\n';
    }
    
    return 0;
}