#include <string>
#include <vector>

using namespace std;
bool visited[200];
void dfs(vector<vector<int>> v, int now){
    if(visited[now]){
        return;
    }
    visited[now] = true;
    
    for(int i = 0; i < v.size(); i++){
        if(v[now][i] && !visited[i]){
            dfs(v, i);
        }
    }
}


int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    
    for(int i = 0; i < n; i++){
        if(!visited[i]){
            answer++;
            dfs(computers, i);
        }
        
    }
    
    
    return answer;
}