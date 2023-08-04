#include <string>
#include <vector>

using namespace std;
int y = 12000, v = 2000;
int solution(int n, int k) {
    int answer = 0;
    answer += n * y;
    k -= n / 10;
    answer += k * 2000;
    return answer;
}