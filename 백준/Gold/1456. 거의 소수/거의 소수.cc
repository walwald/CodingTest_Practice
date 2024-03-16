#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    long long Min, Max;
    cin >> Min >> Max;
    long long A[10000001];
    
    for(int i = 2; i < 10000001; i++){
        A[i]=i;
    }
    
    for(int i = 2; i <= sqrt(10000001); i++){
        if(A[i] == 0) continue;
        for(int j = i + i; j < 10000001; j += i){
            A[j] = 0;
        }
    }
    
    int count = 0;
    for(int i = 2; i < 10000001; i++){
        if(A[i] != 0){
            long long tmp = A[i];
            
            while((double)A[i] <= (double)Max/(double)tmp){
                if((double)A[i]>=(double)Min/(double)tmp){
                    count++;
                }
                tmp = tmp * A[i];
            }
        }
    }
    
    cout << count << '\n';
    
    return 0;
    
}