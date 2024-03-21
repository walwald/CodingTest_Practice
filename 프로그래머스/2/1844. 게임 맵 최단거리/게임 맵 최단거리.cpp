#include<bits/stdc++.h>
using namespace std;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, -1, 0, 1};
queue<tuple<int, int, int>> q;
bool visited[104][104];
int solution(vector<vector<int> > maps)
{
    int answer = 0;
    int n = maps.size();
    int m = maps[0].size();
    
    q.push(make_tuple(0, 0, 0));
    
    while(q.size()){
        int y = get<0>(q.front());
        int x = get<1>(q.front());
        int dist = get<2>(q.front());
        q.pop();
        if(y == n -1 && x == m - 1){
            return dist + 1;
        }
        if(visited[y][x]){
            continue;
        }
        visited[y][x] = true;
        
        for(int i = 0; i < 4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            
            if(ny < 0 || nx < 0 || ny >= n || nx >= m){
                continue;
            }
            if(maps[ny][nx] && !visited[ny][nx]){
                q.push(make_tuple(ny, nx, dist + 1));
            }
        }
        
    }
    
    
    return -1;
}