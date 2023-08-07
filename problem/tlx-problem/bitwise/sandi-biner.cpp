#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll q, k, c;
    
    cin >> q >> k;
    while(q--) {
        cin >> c;
        if((c|k) == c) cout << c;
        else cout << -1;
        cout << "\n";
    }
}