#include <bits/stdc++.h>
using namespace std;
string tmp;
int n, m, ny, nx, a[104][104], vst[104][104], ret;
int dy[4] = { -1, 0, 1, 0}, dx[4] = { 0, 1, 0, -1};
queue<pair<int, int>> q;

void go(int y, int x){
    if(vst[y][x] == 0) vst[y][x] = 1;
    q.push({y, x});
    while(q.size()){
        tie(y, x) = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            ny = y + dy[i];
            nx = x + dx[i];
            if(ny >= n || ny < 0 || nx >= m || nx < 0) continue;
            if(vst[ny][nx] == 0 && a[ny][nx] == 1){
                vst[ny][nx] = vst[y][x] + 1;
                q.push({ny, nx});
            }
        }
    }
    return;
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        for(int j = 0; j < m; j++){
            if(tmp[j] == '1') a[i][j] = 1;
            else a[i][j] = 0;
        }
        
    }
    
    
    go(0, 0);
    
    cout <<vst[n -1][m - 1]<< '\n';
    
    
    return 0;
}