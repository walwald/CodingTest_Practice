#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll Min, Max;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> Min >> Max;
    
    vector<bool> Check(Max - Min + 1);
    for(ll i = 2; i * i <= Max; i++){
        ll pow = i * i;
        ll start_index = Min / pow;
        
        if(Min % pow != 0){
            start_index++;
        }
        
        for(ll j = start_index; j <= Max / pow; j++){
            Check[(j * pow) - Min] = true;
        }
    }
    
    int count = 0;
    for(int i = 0; i <= Max - Min; i++){
        if(!Check[i]){
            count++;
        }
    }
    cout << count << '\n';
    
    return 0;
}