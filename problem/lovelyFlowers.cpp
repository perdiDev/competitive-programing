#include <bits/stdc++.h>
using namespace std;

int p,q, n;

int main() {
    ios_base::sync_with_stdio(false); cin.tie();
    cin >> p >> q;
    n = p*p + q*q + 1;
    if(n%4 == 0){
        cout << n/4 << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}