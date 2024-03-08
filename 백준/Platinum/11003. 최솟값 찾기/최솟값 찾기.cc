#include <bits/stdc++.h>
using namespace std;
int N, L;
typedef pair<int, int> Node; // 함수 바깥에
deque<Node> dq;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  cin >> N >> L;

  for(int i = 0; i < N; i++){
    int now;
    cin >> now;
    // 사이즈 체크 필수 > empty access error
    while(dq.size() && dq.back().first > now) {
      dq.pop_back();
    }
    
    dq.push_back(Node(now, i));

    if(dq.front().second <= i - L) {
      dq.pop_front();
    }

    cout << dq.front().first << ' ';
  }

  return 0;
}