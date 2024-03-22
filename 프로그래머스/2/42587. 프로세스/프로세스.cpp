#include <bits/stdc++.h>

using namespace std;
priority_queue<int> pq;
queue<pair<int, int>> q;
int solution(vector<int> pr, int location) {
    int answer = 0;
    
    for(int i = 0; i < pr.size(); i++){
        pq.push(pr[i]);
        q.push(make_pair(pr[i], i));
    }
    
    while(!q.empty()){
        auto it = q.front();
        int qn = it.first;
        int n = it.second;
        q.pop();
        int bn = pq.top();
        if(qn == bn){
            answer++;
            pq.pop();
            if(n == location){
                return answer;
            }
        } else {
            q.push(it);
        }
    }
    
    return answer;
}