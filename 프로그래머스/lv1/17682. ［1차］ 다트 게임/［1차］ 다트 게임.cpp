#include <string>
#include <bits/stdc++.h>

using namespace std;
map<char, int> mp;
vector<int> v;
int solution(string dartResult) {
    int answer = 0;
    mp.insert({'S', 1});
    mp.insert({'D', 2});
    mp.insert({'T', 3});
    //score: 10 경우
    for(int i =0; i < 3; i++){
        int n;
        if(dartResult[1] == 'S' || dartResult[1] == 'D' || dartResult[1] == 'T'){
            n = atoi(dartResult.substr(0, 1).c_str());
            dartResult.erase(0, 1);
        } else {
            n = atoi(dartResult.substr(0, 2).c_str());
            dartResult.erase(0, 2);
        }
        
        int tmp = (int)pow(n, mp[dartResult[0]]);
        v.push_back(tmp);
        dartResult.erase(0, 1);
        
        if(dartResult[0] == '*' || dartResult[0] == '#'){
            if(dartResult[0] == '*') {
                v[i] *= 2;
                if(i > 0) v[i - 1] *= 2;
            }
            if(dartResult[0] == '#') v[i] *= -1;
            dartResult.erase(0, 1);
        }
    }

    answer = accumulate(v.begin(), v.end(), 0);
    
    return answer;
}