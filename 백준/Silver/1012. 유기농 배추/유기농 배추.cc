#include <bits/stdc++.h>
using namespace std;
int t, ny, nx, tmp1, tmp2, n, m, k;
int dy[4] = { -1, 0, 0, 1}, dx[4] = {0, 1, -1, 0};
int a[54][54], vst[54][54];
void go(int y, int x){
    vst[y][x] = 1;
    for(int i =0; i < 4; i++){
        ny = y + dy[i];
        nx = x + dx[i];
        if(ny >= n || ny < 0 || nx >=m || nx < 0) continue;
        if(!vst[ny][nx] && a[ny][nx]) go(ny, nx);
    }
    return;
}
int main(){
    cin >> t; 
    for(int i = 0; i < t; i++){
        int ret = 0;
        cin >> m >> n >> k;

        for(int j = 0; j < k ; j ++){
            cin >> tmp1 >> tmp2;
            a[tmp2][tmp1] = 1;
        }
        
        for(int j = 0; j < n; j++){
            for(int l = 0; l < m; l++){
                if(vst[j][l] == 0 && a[j][l] == 1){
                  ret++;
                  go(j, l);
                } 
            }
        }
        
        cout << ret << '\n';
        memset(a, 0, sizeof(a));
        memset(vst, 0, sizeof(vst));
    }
    

    
    return 0;
}