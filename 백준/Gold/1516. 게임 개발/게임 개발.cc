#include <bits/stdc++.h>
using namespace std;
int N, T[504], ind[504], ret[504];
vector<int> A[504];
void sort(){
    queue<int> q;
    for(int i = 1; i <= N; i++){
        if(ind[i] == 0){
            q.push(i);
        }
    }

    while(q.size()){
        int now = q.front();
        q.pop();
        
        for(int i : A[now]){
            ret[i] = max(ret[now] + T[now], ret[i]);
            ind[i]--;
            if(ind[i] == 0){
                q.push(i);
            }
        }
    }
}

int main(){
    cin >> N;
    
    for(int i = 1; i <= N; i++){
        cin >> T[i];
        
        while(true){
            int a;
            cin >> a;
            if(a == -1) break;
            
            A[a].push_back(i);
            ind[i]++;
        }
    }
    
    sort();
        
    
    for(int i = 1; i <= N; i++){
        ret[i] += T[i];
    }

    
    for(int i = 1; i <= N; i++){
        cout << ret[i] << '\n';
    }
    
    return 0;
}