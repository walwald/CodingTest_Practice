#include <string>
#include <vector>

using namespace std;
vector<int> tmp;
vector<vector<int>> a;
void quard(int y, int x, int size){
    if(size == 1) {
        tmp.push_back(a[y][x]);
        return;
    }
    
    int b = a[y][x];
    for(int i = y; i < y + size; i++){
        for(int j = x; j < x + size; j++){
            if(a[i][j] != b){
                quard(y, x, size/2);
                quard(y, x + size/2, size/2);
                quard(y + size/2, x, size/2);
                quard(y + size/2, x + size/2, size/2);
                return;
            }
        }
    }
    tmp.push_back(b);
    return;
}

vector<int> solution(vector<vector<int>> arr) {
    vector<int> answer(2, 0);
    
    a = arr;
    
    quard(0, 0, arr.size());
    for(int i : tmp){
        if(i == 0) answer[0]++;
        else answer[1]++;
    }
    
    return answer;
}