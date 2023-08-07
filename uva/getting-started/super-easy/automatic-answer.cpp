#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll q, n, ans;

    cin >> q;
    while(q--) {
        cin >> n;
        ans = (((315*n)+36962)%100)/10;
        cout << abs(ans) << "\n";
    }

    return 0;
}