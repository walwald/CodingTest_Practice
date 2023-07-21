#include <bits/stdc++.h>
using namespace std;
int n, m;
string name, q;
map<string, int> d;
map<int, string> rd;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n >> m;
    
    for(int i = 1; i <= n; i++){
        cin >> name;
        d.insert({ name, i });
        rd.insert({ i ,name });
    }
    
    for(int i = 0; i < m; i++){
        cin >> q;
        if(atoi(q.c_str()) == 0) cout << d[q] << '\n';
        else cout << rd[atoi(q.c_str())] << '\n';
    }
    
    return 0;
}