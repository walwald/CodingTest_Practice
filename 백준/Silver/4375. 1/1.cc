#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    while(scanf("%d", &n) != EOF){
        ll m = 1, ret = 1;
        while(true){
            if(m % n){
                m = m * 10 + 1;
                m %= n;
                ret++;
            }
            else {
                printf("%d\n", ret);
                break;
            }
        }
    }
    
    return 0;
}