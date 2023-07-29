#include <string>
#include <vector>

using namespace std;
int n;
string solution(string my_string, string letter) {
    string answer = "";
    
    n = my_string.size();
    
    for(int i = 0; i < n; i++){
        if(my_string.substr(i, 1) != letter) answer += my_string.substr(i, 1);
    }

    return answer;
}