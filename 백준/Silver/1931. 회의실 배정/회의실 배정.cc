#include <bits/stdc++.h>
using namespace std;
pair<int, int> A[100004];
int N, ret, s, e;
int main(){
    cin >> N;
    for(int i = 0; i < N; i++){
        int s, e;
        cin >> s >> e;
        A[i].first = e;
        A[i].second = s;
    }
    
    sort(A, A + N);
    
    s = 0;
    e = -1;
    for(int i = 0; i < N; i++){
        if(A[i].second >= e){
            ret ++;
            e = A[i].first;
        }
    }
    
    cout << ret << '\n';
        
    return 0;
}