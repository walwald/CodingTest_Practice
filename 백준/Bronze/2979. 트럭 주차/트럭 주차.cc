#include <bits/stdc++.h>
using namespace std;
int a, b, c, cnt, ret = 0;
vector<pair<int, int>> t(3, pair<int,int>(0, 0));

int main(){
    cin >> a >> b >> c;
    for(int i = 0; i < 3; i++) cin >> t[i].first >> t[i].second;
    
    for(int i = 1; i <= 100; i++){
        cnt = 0;
        
        for(pair<int, int> p : t){
            if(i >= p.first && i < p.second) cnt++;
        }
        
        switch(cnt){
            case 1: 
                ret += a;
                break;
            case 2: 
                ret += 2 * b;
                break;
            case 3: 
                ret += 3 * c;
                break;
        }
    }
    
    cout << ret << '\n';
        
    return 0;
}