#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a;
int main(){
    cin >> n;
    for(int i =0; i<n;i++){
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    
    sort(a.begin(), a.end());
    
    int sumA[n];
    sumA[0] = a[0];
    for(int i=1; i<n; i++){
        sumA[i] = sumA[i - 1] + a[i];
    }
    
    cout << accumulate(sumA, sumA + n, 0) << '\n';
    
    return 0;
}