#include <bits/stdc++.h>

using namespace std;
int ret;
int dfs(int depth, int now, vector<int> v, int k){
    if(depth == v.size()){
        if(now == k) return 1;
        return 0;
    }
    
    int nd = depth + 1;
    return dfs(nd, now + v[depth], v, k) + dfs(nd, now - v[depth], v, k);
}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    
    
    answer = dfs(0, 0, numbers, target);
    return answer;
}