#include <bits/stdc++.h>

using namespace std;
int solution(vector<int> ppl, int limit) {
    int answer = 0;
    // 꽉꽉 채워 타야함
    sort(ppl.begin(), ppl.end());
    int l = 0;
    int r = ppl.size() -1;
    
    while(l <= r){
        int sum = ppl[l] + ppl[r];
        if(l == r) {
            answer++;
            break;
        }
        if(sum <= limit){
            answer++;
            l++;
            r--;
        } else {
            answer++;
            r--;
        }
    }
    
    return answer;
}