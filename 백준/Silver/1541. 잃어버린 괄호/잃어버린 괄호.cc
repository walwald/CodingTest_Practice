#include <bits/stdc++.h>
using namespace std;
string tmp;
string s = "";
int ret, mns, mssum;
int main(){
    cin >> tmp;
    
    for(char c : tmp){
        if(c >= '0' && c <= '9'){
            s += c;
        } else {
            if(mns){
                if( c == '+'){
                    mssum += atoi(s.c_str());
                    s="";
                } else {
                    mssum += atoi(s.c_str());
                    ret -= mssum;
                    mssum = 0;
                    s="";
                }
            } else {
                ret += atoi(s.c_str());
                if(c == '-'){
                    mns = 1;
                }
                s="";
            }
        }
    }
    
    if(mns){
        mssum += atoi(s.c_str());
        ret -= mssum;
    } else {
        ret += atoi(s.c_str());
    }
    
    cout << ret << "\n";
    return 0;
}
    
    