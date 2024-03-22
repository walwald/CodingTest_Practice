#include <bits/stdc++.h>

using namespace std;

bool solution(vector<string> pb) {
    bool answer = true;
    sort(pb.begin(), pb.end());
    
    for(int i = 0; i < pb.size(); i++){
        for(int j = i + 1; j < pb.size(); j++){
            if(pb[j].size() <= pb[i].size()) break;
            if(pb[j].find(pb[i])==0){
                return false;
            }
        }
    }
    
    return answer;
}