#include <string>
#include <vector>

using namespace std;
void hanoi(vector<vector<int>> &ans, int num, int from, int to, int other){
    if(num == 0) return;
    hanoi(ans, num - 1, from, other, to);
    ans.push_back({from, to});
    hanoi(ans, num - 1, other, to, from);
};

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    hanoi(answer, n, 1, 3, 2);

    return answer;
}