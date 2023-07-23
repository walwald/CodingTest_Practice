#include <bits/stdc++.h>
using namespace std;
#define y1 aaaaa
int m, n, k, ret, a[101][101], vst[101][101], ny, nx, y1, y2, x1, x2;
int dy[4] = {-1, 0, 0, 1}, dx[4] = {0, 1, -1, 0};
vector<int> v;

int dfs(int y, int x){
    vst[y][x] = 1;
    int ret = 1;
    for(int i = 0; i < 4; i++){
        ny = y + dy[i];
        nx = x + dx[i];
        if(ny >= m || ny < 0 || nx >= n || nx < 0) continue;
        if(vst[ny][nx] == 0 && a[ny][nx] == 0) {
            ret += dfs(ny, nx);
        }
    }
    return ret;
}


int main(){
    cin >> m >> n >> k;
    for(int i = 0; i < k; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        for(int y = y1; y < y2; y++){
            for(int x = x1; x < x2; x++){
                a[y][x] = 1;
            }
        }
    }
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] == 0 && vst[i][j] == 0){
                v.push_back(dfs(i, j));
            }
        }
    }
    
    sort(v.begin(), v.end());
    
    cout << v.size() <<"\n";
    for(int a : v) cout << a << ' ';
    cout << '\n';
    
    return 0;
}