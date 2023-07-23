#include <bits/stdc++.h>
using namespace std;
int a[101][101], vst[101][101], ny, nx, n, mx, hst, tmp;
int dy[4] = { -1, 0, 0, 1}, dx[4] = { 0, 1, -1, 0};
void dfs(int y, int x, int k){
    vst[y][x] = 1;  
    for(int i = 0; i < 4; i++){
        ny = y + dy[i];
        nx = x + dx[i];
        if(ny >= n || ny < 0|| nx >= n || nx < 0) continue;
        if(!vst[ny][nx] && a[ny][nx] > k){
            dfs(ny, nx, k);
        }
    }
}

int main(){
    cin >> n;
    for(int i = 0; i <n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            hst = max(hst, a[i][j]);
        }
    }
    
    for(int i = 0; i < hst; i++){
        tmp = 0;
        for(int j = 0; j < n; j++){
            for(int l = 0; l < n; l++){
                if(!vst[j][l] && a[j][l] > i){
                    dfs(j, l, i);
                    tmp++;
                }
            }
        }

        mx = max(mx, tmp);
        fill(&vst[0][0], &vst[0][0] + 101 * 101, 0);
    }
    
    cout << mx << '\n';    
    
    return 0;
}