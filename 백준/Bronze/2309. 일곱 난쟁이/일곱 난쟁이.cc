#include <bits/stdc++.h>
using namespace std;

vector<int> h(9, 0);
vector<int> ret(7, 0);
void change(vector<int> &v){
    for(int i = 0; i < 7; i++){
        ret[i] = h[v[i]];
    }
    sort(ret.begin(), ret.end());
    return;
}
void combi(int start, vector<int> &v){
    if(v.size() == 7){
        change(v);
        if(accumulate(ret.begin(), ret.end(), 0) == 100){
            for(int a : ret) cout << a << '\n';
            exit(0);
        } 
        return;
    }
    for(int i = start + 1; i < 9; i++){
        v.push_back(i);
        combi(start + 1, v);
        v.pop_back();
    }
    return;
}


int main(){
    for(int i = 0; i < 9; i++){
        cin >> h[i];        
    }
    
    vector<int> v;
    combi(-1, v);
    
    return 0;
}