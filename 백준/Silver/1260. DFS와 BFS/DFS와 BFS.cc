#include <bits/stdc++.h>
using namespace std;
int N, M, V;
vector<int> dfsRet;
vector<int> bfsRet;
vector<bool> vstDfs(1004, false);
vector<bool> vstBfs(1004, false);
vector<int> mp[1004];
queue<int> q;
void dfs(int num){
    cout << num << ' ';
    vstDfs[num] = true;
    
    sort(mp[num].begin(), mp[num].end());

    for(int i : mp[num]){
        if(!vstDfs[i]){
            dfs(i);
        }
    }
  
};

void bfs(){
    while(q.size() > 0){
      if(vstBfs[q.front()]){
        q.pop();
        continue;
      }

      vstBfs[q.front()] = true;

          
    sort(mp[q.front()].begin(), mp[q.front()].end());
   
      for(int i : mp[q.front()]){
          if(!vstBfs[i]){
              q.push(i);
          }
       }
        
      cout << q.front() << ' ';  
      q.pop();
    }
};

int main(){
    cin >> N >> M >> V;
    for(int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        mp[a].push_back(b);
        mp[b].push_back(a);
    }

    dfs(V);
    cout << '\n';
    q.push(V);
    bfs();
    cout << '\n';
    return 0;
}