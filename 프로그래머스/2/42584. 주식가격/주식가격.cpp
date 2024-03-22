#include <bits/stdc++.h>
using namespace std;
stack<pair<int, int>> stk;
deque<int> v;
vector<int> solution(vector<int> prices) {
    vector<int> answer(prices.size(), 0);
    for(int i = 0; i < prices.size(); i++){
        stk.push(make_pair(prices[i], i));
    }
    
    while(stk.size()){
        auto it = stk.top();
        int ret = 0;
        for(int i = 0; i < v.size(); i++){
            ret++;
            if(v[i] < it.first){
                break;
            }
        }
        answer[it.second] = ret;
        v.push_front(it.first);
        stk.pop();
    }
    
    
    return answer;
}