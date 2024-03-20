#include <string>
#include <vector>

using namespace std;
int a[] = {1, 2, 3, 4, 5};
int b[] = {2, 1, 2, 3, 2, 4, 2, 5};
int c[] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
int ret[4];
vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    for(int i = 0; i < answers.size(); i++){
        if(answers[i] == a[i % 5]){
            ret[1]++;
        }
        
        if(answers[i] == b[i % 8]){
            ret[2]++;
        }
            
        if(answers[i] == c[i % 10]){
            ret[3]++;
        }
    }
    
    int mx = 0;
    for(int i = 1; i <= 3; i++){
        if(ret[i] > mx){
            mx = ret[i];
        }
    }
    
    for(int i = 1; i <= 3; i++){
        if(ret[i] == mx){
            answer.push_back(i);
        }
    }
    
    return answer;
}