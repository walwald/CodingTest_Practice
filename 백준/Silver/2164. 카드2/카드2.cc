#include <bits/stdc++.h>
using namespace std;
int n;
queue<int> qu;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n;
    for(int i = 1; i <= n; i++){
        qu.push(i);
    }
    
    while(qu.size() > 1){
        qu.pop();
        qu.push(qu.front());
        qu.pop();
    }
    
    cout << qu.front() << '\n';
    
    return 0;
}