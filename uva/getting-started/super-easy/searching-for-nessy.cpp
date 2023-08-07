#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t, n, m, ans;

    cin >> t;

    while(t--) {
        cin >> n >> m;
        ans = (n/3) * (m/3);
        cout << ans << "\n";
    }

    return 0;
}