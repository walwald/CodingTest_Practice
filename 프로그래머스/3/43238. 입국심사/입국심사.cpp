#include <bits/stdc++.h>
using namespace std;
priority_queue<int, vector<int>, greater<int>> q;
long long solution(int n, vector<int> times) {
    long long answer = 0;
    // 어떤 값을 지정 했을 때 그 값 나누기 모든 수의 값의 합이 n보다 작으면 더 큰 수 크거나 같으면 더 작은 수
    long long r = (long long)((long long)1000000000 * (long long)1000000000);
    long long l = 0;
    
    sort(times.begin(), times.end());
    
    while(l <= r){
        long long mid = (l + r) / 2;
        long long ret = 0;
        for(int i = 0; i < times.size(); i++){
            ret += (mid / (long long)times[i]);
        }
        
        if( ret < n ){
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    
    return l;
}