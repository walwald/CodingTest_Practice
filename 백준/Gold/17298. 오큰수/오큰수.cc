#include <bits/stdc++.h>
using namespace std;
int n;
stack<int> stk;
int arr[1000004];
int ret[1000004];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    stk.push(0);
    
    for(int i = 1; i < n; i++){
        while(!stk.empty() && arr[stk.top()] < arr[i]){
            ret[stk.top()] = arr[i];
            stk.pop();
        }
        
        stk.push(i);
    }
    
    while(!stk.empty()) {
        ret[stk.top()] = -1;
        stk.pop();
    }
    
    for(int i = 0; i < n; i ++ ) {
      cout << ret[i] << '\n';
    }
    
    return 0;
}