#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    answer.push_back(0);
    answer.push_back(0);
    
    for(int i : num_list){
        if(i % 2) answer[1]++;
        else answer[0]++;
    }
    
    return answer;
}