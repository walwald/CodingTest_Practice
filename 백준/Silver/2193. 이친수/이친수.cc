#include <bits/stdc++.h>
using namespace std;
int N;
pair<long long, long long> D[94];
int main(){
    cin >> N;
    
    D[1].first = 0;
    D[1].second = 1;
    
    for(int i = 2; i <= N; i++){
        D[i].first = D[i-1].first + D[i-1].second;
        D[i].second = D[i-1].first;
    }
    
    cout << D[N].first + D[N].second << "\n";
    
    return 0;
}