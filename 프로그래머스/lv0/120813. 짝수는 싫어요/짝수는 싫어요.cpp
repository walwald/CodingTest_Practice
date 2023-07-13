#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    
    for(int i = n; i > 0; i -= 2){
        if(n % 2 == 0){
            answer.push_back(i - 1);
        } else {
            answer.push_back(i);
        }        
    }
    
    sort(answer.begin(), answer.end());
    
    return answer;
}