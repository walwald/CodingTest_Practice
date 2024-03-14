#include <bits/stdc++.h>
using namespace std;
priority_queue<int, vector<int>, greater<int>> pq;
int N, ret;
int main(){
    cin >> N;
    for(int i = 0; i < N; i++){
        int tmp;
        cin >> tmp;
        pq.push(tmp);
    }
    
    while(pq.size() != 1){
        int d1 = pq.top();
        pq.pop();
        int d2 = pq.top();
        pq.pop();
        ret += d1 + d2;
        pq.push(d1+ d2);
    }
    
    cout << ret << '\n';
    
    return 0;
}