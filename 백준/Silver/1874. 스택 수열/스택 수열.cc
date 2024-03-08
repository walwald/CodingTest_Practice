#include <bits/stdc++.h>
using namespace std;
int n;
vector<string> ret;
stack<int> stk;
int main(){
  // ios::sync_with_stdio(false);
  // cin.tie(NULL); cout.tie(NULL);

  cin >> n;
  vector<int> org(n);
  vector<int> cp(n);
  
  for(int i = 0; i < n; i++){
    int tmp;
    cin >> tmp;
    org[i] = tmp;
    cp[i] = tmp;
  }

  // sort(cp, cp + n);
  sort(cp.begin(), cp.end());
  // 불가능한 경우가 언제지?

  queue<int> qq;
  for(int i : cp) {qq.push(i);}

  for(int i = 0; i < n; i++){
    while(stk.size() == 0 || stk.top() != org[i]){
      if(qq.size()==0) {
        cout << "NO" << '\n';
        return 0;
      }
      int tmp = qq.front();
      stk.push(tmp);
      ret.push_back("+");
      qq.pop();
    } 

      stk.pop();
      ret.push_back("-");
  }

  for(string str :ret) cout << str << '\n';

  return 0;
}