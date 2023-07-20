#include <bits/stdc++.h>
using namespace std;
//next_permutation

vector<int> h(9, 0);

int main(){
      
    for(int i = 0; i < 9; i++){
        cin >> h[i];
    }

    do{
       int sum = 0;
        for(int i = 0; i < 7; i++){
            sum += h[i];
        }
        if(sum == 100) break;
        
    }while(next_permutation(h.begin(), h.end()));
        
    sort(h.begin(), h.begin() + 7);
    for(int i = 0; i < 7; i++) cout << h[i] << '\n';
    
    return 0;
}