#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int N;
ll now;
bool pelindrom(string s){    
    queue<char> q;
    bool ret = true;
    for(int i = 0; i < s.size()/2; i++){
        q.push(s[i]);
    }
    
    for(int i = 1; i <= s.size()/2; i++){
        if(q.front() != s[s.size() - i]){
            ret = false;
            break;
        }
        q.pop();
    }
    
    return ret;
}

bool isPrime(ll n){
    if(n == 1) return false;
    for(ll i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    
    return true;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> N;
    
    now = N;
    while(true){
        string s = to_string(now);
        if(pelindrom(s)&&isPrime(now)){
            cout << now << '\n';
            return 0;
        }
        now++;
    }
    
    return 0;
}