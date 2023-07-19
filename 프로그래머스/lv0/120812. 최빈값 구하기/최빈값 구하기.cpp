#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
vector<int> num;
int mx = 0;
int s = -1;
int solution(vector<int> a) {
    int answer = 0;
    sort(a.begin(), a.end());
    
    for(int i = 0; i < a.size(); i++){
        if(i != 0 && a[i] == a[i - 1]) {
            num[num.size() - 1]++;
        } else{ num.push_back(1);}
    }
    
    for(int i : num){
        if(i > mx) mx = i;
    }
    
    for(int i : num){
        s += i;

    if(i == mx && answer != 0) {
        return -1;
    } else if(i == mx) {
          answer = a[s];   
      }
    }
    
    return answer;
}