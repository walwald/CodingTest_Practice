#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    sort(array.begin(), array.end());
    
    int middle = array.size() / 2;
    
    answer = array[middle];
    
    return answer;
}