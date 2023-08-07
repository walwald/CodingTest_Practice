#include <string>
#include <vector>

//m+1부터 n까지 곱하기
double fact(int n, int m) {
    double ret = 1;
    for(int i = m + 1; i <= n; i++){
        ret *= i;
    }
    return ret;
}

using namespace std;

int solution(int balls, int share) {
    double answer = 0;
    if(balls == share) answer = 1;
    else answer = fact(balls, share)/fact(balls - share, 0);

    return answer;
}