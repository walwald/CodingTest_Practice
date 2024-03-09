#include <bits/stdc++.h>
using namespace std;
int n;
stack<int> stk;
bool bb = true;
vector<char> ret;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int j = 1;

    
    for(int i = 0; i < n; i++){
        while(!stk.size() || stk.top() != arr[i]){
            // 숫자 비교 주의
           if(j > n){
            cout << "NO" << '\n';
            return 0;
           }
            stk.push(j);
            ret.push_back('+');
            j++;
        }
        
        if(stk.top() == arr[i]){
            stk.pop();
            ret.push_back('-');
        }    
    }
    
   for(char c : ret) cout << c << '\n';
    
    return 0;
}