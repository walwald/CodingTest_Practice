#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    if(n & 1) cout << n << " is odd\n";
    else cout << n << " is even\n";
        
    return 0;
}