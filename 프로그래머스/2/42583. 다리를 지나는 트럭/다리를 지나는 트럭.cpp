#include <bits/stdc++.h>
using namespace std;
queue<int> q;
queue<pair<int, int>> bus;
int solution(int bridge_length, int weight, vector<int> tw) {
    int answer = 0;
    for(int i : tw){
        q.push(i);
    }
    
    int sum = 0;
    while(q.size() || bus.size()){
        if (bus.size()){
            auto fr = bus.front();
            int st = fr.second;
            if(answer >= st + bridge_length){
                sum -= fr.first;
                bus.pop();
            }
        }
        
        if(q.size() && (sum + q.front() <= weight)){
            sum += q.front();
            bus.push(make_pair(q.front(), answer));
            q.pop();
        }
        
        answer++;
    }
    
    return answer;
}