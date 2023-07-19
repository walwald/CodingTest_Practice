#include <bits/stdc++.h>
using namespace std;
vector<int> a(9,0);
int n = 9, r = 7;
vector<vector<int>> ret(36, vector<int>(7,0));
int sum;

void print(vector<int> b){
    sort(b.begin(), b.end());
    for(int i : b) cout << i << '\n';    
}

void combi(int start, vector<int> &b){
    if(b.size() == r){
        ret.push_back(b);
        return;
    }
    for(int i = start + 1; i < n; i++){
        b.push_back(a[i]);
        combi(i, b);
        b.pop_back();
    }
    return;
}

int main(){
    for(int i = 0; i < 9; i++) cin >> a[i];
    sort(a.begin(), a.end());
    
    vector<int> v;
    combi(-1, v);
    
    for(vector<int> i : ret){
        sum = accumulate(i.begin(),i.end(), 0);
        if(sum == 100){
            print(i);
            return 0;
        }
    }
    
    return 0;
}