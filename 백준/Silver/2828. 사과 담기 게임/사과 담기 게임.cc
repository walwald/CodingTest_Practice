#include <bits/stdc++.h>
using namespace std;

int n, m, j, cnt;
int a[21];
void move(int left, int right, int apple){
    if(apple == j) return;
    int tgt = a[apple];
    if(left < 0 || right > n) return;
    else if(tgt > right) {
        cnt++;
        move(left + 1, right + 1, apple);
    } else if(tgt < left){
        cnt++;
        move(left - 1, right - 1, apple);
    } else {
        move(left, right, apple + 1);
    }
    return;
}


int main(){
    cin >> n >> m;
    cin >> j;
    for(int i = 0; i < j; i++){
        cin >> a[i];
    }
    
    move(1, m, 0);
    cout << cnt << '\n';
    
    return 0;
}