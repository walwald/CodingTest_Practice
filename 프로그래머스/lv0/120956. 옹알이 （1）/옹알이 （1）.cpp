#include <string>
#include <vector>

using namespace std;
string a[4] = { "aya", "ye", "woo", "ma"};


int solution(vector<string> babbling) {
    int answer = 0;
    for(int i = 0; i < babbling.size(); i++){
        int cnt = 0;
        for(int j = 0; j < 4; j++){
            auto p = babbling[i].find(a[j]);
            if(p != string::npos){
                cnt += a[j].size();
            }
        }    
        if(babbling[i].size()== cnt) answer++;
    }
    
    return answer;
} 