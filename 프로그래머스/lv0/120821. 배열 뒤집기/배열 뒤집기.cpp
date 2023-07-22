#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    reverse(num_list.begin(), num_list.end());
    answer = num_list;
    return answer;
}