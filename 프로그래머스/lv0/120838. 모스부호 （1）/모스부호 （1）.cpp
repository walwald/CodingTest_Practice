#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
map<string, string> mp;
string solution(string letter) {
    string answer = "";
    mp.insert({".-", "a"});
    mp.insert({"-...", "b"});
    mp.insert({"-.-.", "c"});
    mp.insert({"-..", "d"});
    mp.insert({".", "e"});
    mp.insert({"..-.", "f"});
    mp.insert({"--.", "g"});
    mp.insert({"....", "h"});
    mp.insert({"..", "i"});
    mp.insert({".---", "j"});
    mp.insert({"-.-", "k"});
    mp.insert({".-..", "l"});
    mp.insert({"--", "m"});
    mp.insert({"-.", "n"});
    mp.insert({"---", "o"});
    mp.insert({".--.", "p"});
    mp.insert({"--.-", "q"});
    mp.insert({".-.", "r"});
    mp.insert({"...", "s"});
    mp.insert({"-", "t"});
    mp.insert({"..-", "u"});
    mp.insert({"...-", "v"});
    mp.insert({".--", "w"});
    mp.insert({"-..-", "x"});
    mp.insert({"-.--", "y"});
    mp.insert({"--..", "z"});
    
    string tmp = "";
    for(int i = 0; i < letter.size(); i++){
        if(letter[i] == ' '){
            answer += mp[letter.substr(0, i)];
            letter.erase(0, i + 1);
            i = 0;
        }
        if(i == letter.size() - 1) answer += mp[letter.substr(0, i + 1)];
    }

    return answer;
}