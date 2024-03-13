#include <bits/stdc++.h>
using namespace std;
int N, M;
vector<int> a, b;
int main(){
    cin >> N;
    for(int i =0; i < N; i++){
      int tmp;
      cin >> tmp;
      a.push_back(tmp);
    }
    
    sort(a.begin(), a.end());
    
    cin >> M;
    for(int i =0; i < M; i++){
      int tmp;
      cin >> tmp;
      b.push_back(tmp);
    }
    
    
    for(int i : b){
        int l = 0;
        int r = N - 1;
        int mid;
        bool ret = false;
        while (l <= r){
            mid = (l + r)/2;
            if(a[mid] == i){
                cout << 1 << '\n';
                ret = true;
                break;
            } else if(a[mid] < i){
               l = mid + 1;
            } else {
                r = mid - 1;
            }


        }
        if(!ret) cout << 0 << '\n';
    }
    
    return 0;
}