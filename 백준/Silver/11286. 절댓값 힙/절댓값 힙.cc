#include <bits/stdc++.h>
using namespace std;
struct cmp {
    bool operator()(int o1, int o2){
        if(abs(o1) == abs(o2)){
            return o1 > o2;
        } else {
          return abs(o1) > abs(o2);
        }
    }
}; // ; 필수

priority_queue<int, vector<int>, cmp> pq;

int n;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n;
    for(int i = 0; i < n; i++){
      int x;
      cin >> x;
        
      if(x == 0){
          if(pq.empty()) {
            cout << 0 << '\n';
          } else {
            cout << pq.top() << '\n';
            pq.pop();
          }
      } else {
          pq.push(x);
      }
    }
    return 0;
}