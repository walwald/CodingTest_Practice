#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int mn = 2001;
//명예 전당 여부 판별 & 교체
int a[101];
//그 중 최하위 push
vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    
    for(int i = 0; i < score.size(); i++){
        int ind;
        if(i < k){
            a[i] = score[i];
            sort(a, a + i + 1, greater<int>());
            answer.push_back(a[i]);
        } else {
            sort(a, a + k, greater<int>());
            if(score[i] > a[k - 1]) {
                a[k - 1] = score[i];
                sort(a, a + k, greater<int>());
            }
            answer.push_back(a[k - 1]);
        }

    }
    return answer;
}