#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
double piece = 7;

int solution(int n) {
    int answer = 0;
    
    answer = ceil(n / piece);
    return answer;
}