#include <bits/stdc++.h>
using namespace std;
set<int> st;
void go(string comb, string others){
    if(comb != ""){
        int tmp = atoi(comb.c_str());
        st.insert(tmp);
    }

    int sz = others.size();
    for(int i = 0; i < sz; i++){
        string tp = others;
        go(comb + others[i], tp.erase(i, 1));
    }
}

bool isPrime(int n){
    if(n == 0 || n == 1) return false;
    if(n == 2) return true;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    
    return true;
}


int solution(string numbers) {
    int answer = 0;
    string tmps = "";
    go(tmps, numbers);
    
    for(int i : st){
        if(isPrime(i)) answer++;
    }
    
    return answer;
}