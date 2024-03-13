#include <bits/stdc++.h>
using namespace std;
int N, M;
int v[104][104];
int mp[104][104];
int dy[4] = {-1, 0, 1, 0}, dx[4] = {0, -1, 0, 1};
void bfs(int fx, int fy){
    queue<pair<int, int>> q;
    v[fx][fy] = 1;
    q.push(make_pair(fx, fy));
    
    while(q.size()){
        int x, y;
        tie(x,y) = q.front();
        q.pop();
        
        for(int i = 0; i < 4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny >=M || ny <0 || nx >= N || nx < 0){
                continue;
            }
            if(v[nx][ny] == 0 && mp[nx][ny]){
                q.push(make_pair(nx, ny));
                v[nx][ny] = v[x][y] + 1;
            }
        }
    }
};

int main(){
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        for(int j = 0; j < M; j++){
            mp[i][j] = s[j] - '0';
        }
    }
    
    bfs(0, 0);
    
    cout << v[N-1][M-1] << '\n';
    
    return 0;
}