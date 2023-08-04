#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
map<int, int> mp;
vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> tmp;
    for(int i : emergency){
        tmp.push_back(i); 
    }
    
    sort(emergency.begin(),emergency.end(), greater<int>());
    
    for(int i = 0; i < emergency.size(); i++){
        mp.insert({emergency[i], i+1});
    }
    for(int i : tmp){
        answer.push_back(mp[i]);
    }

    return answer;
}