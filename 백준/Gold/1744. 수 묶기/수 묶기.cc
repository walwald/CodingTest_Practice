#include <bits/stdc++.h>
using namespace std;
int N;
vector<int> P;
vector<int> M;
int ret;
int main(){
    cin >> N;
    for(int i =0; i < N; i++){
        int tmp;
        cin >> tmp;
        if(tmp > 0) {
            P.push_back(tmp);
        } else {
            M.push_back(tmp);
        }
    }
    
    sort(P.begin(), P.end(), greater<int>());
    sort(M.begin(), M.end());
    
    for(int i = 0; i < P.size(); i ++){
        if((i + 1)== P.size()||P[i] == 1 || P[i+1] == 1){
            ret += P[i];
        } else {
            ret += P[i] * P[i + 1]; 
            i++;
        }
    }
    
    for(int i = 0; i < M.size(); i += 2){
        if((i + 1) == M.size()){
            ret += M[i];    
        } else {
            ret += M[i] * M[i + 1];            
        }
    }
    
    cout << ret << '\n';
    
    return 0;
}