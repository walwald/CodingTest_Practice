#include <bits/stdc++.h>

using namespace std;
int dist[54];
bool check(string s, string tg){
    int ret = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != tg[i]){
            ret++;
        }
    }
    if(ret > 1) {
        return false;
    } 
    
    return true;
}
int ret = 1e9;
void dfs(int now, vector<string> v, int d, string tg){
    if(v[now] == tg){
        ret = min(ret, d);
    }
    
    for(int i = 0; i < v.size(); i++){
        if(check(v[now], v[i]) && (dist[i] > d || dist[i] == 0)){
            dist[i] = d + 1;
            dfs(i, v, d + 1, tg);
        }
    }

}

int solution(string begin, string target, vector<string> words) {
    int answer = 0;
    
    if(find(words.begin(), words.end(), target) == words.end()){
        return 0;
    }
    
    for(int i = 0; i < words.size(); i++){
        if(check(begin, words[i])){
            dfs(i, words, 1, target);                    
        }
    }

    answer = ret;
    return answer;
}