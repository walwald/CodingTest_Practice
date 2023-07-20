#include <bits/stdc++.h>
using namespace std;
int n, ind;
string p, first, second, s;
vector<string> ret;

int main(){
    cin >> n;
    cin >> p;
    
   ind = p.find("*");
   first = p.substr(0, ind);
   second = p.substr(ind + 1);
   
        
    for(int i = 0; i < n; i++){
        cin >> s;
        if(s.size() < first.size() + second.size()) ret.push_back("NE\n");
        else {
            if(s.substr(0, ind) == first 
               && s.substr(s.size() - second.size()) == second){
                ret.push_back("DA\n");
            } else ret.push_back("NE\n");
        }
    }
    
    for(string a : ret) cout << a ;
    
    return 0;
}