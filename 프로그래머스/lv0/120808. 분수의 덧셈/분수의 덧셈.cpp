#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    
    //통분한 합
    int numer = numer1 * denom2 + numer2 * denom1;
    int denom = denom1 * denom2;
    
    
    //최대 공약수로 나누기
    for(int i = min(numer, denom); i > 0; i--){
        if(numer % i == 0 && denom % i == 0){
            numer = numer / i;
            denom = denom / i;
            break;
        }
    }
    
    answer = { numer, denom };
    return answer;
}