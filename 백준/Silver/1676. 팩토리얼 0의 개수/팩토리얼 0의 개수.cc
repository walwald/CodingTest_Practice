#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    int zeros = 0;
    for(int i = 5; i <= N; i *= 5){
        zeros += N / i;
    }
    
    cout << zeros << '\n';
    
    return 0;
}