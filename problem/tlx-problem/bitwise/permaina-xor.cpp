#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n, temp, a, max=0, ans=1;

    cin >> n;
    temp = n;
    while(n--) {
        cin >> a;
        if(a>max) max=a;
    }

    while(ans < max) {
        ans *= 2;
    }

    ans--;

    if(temp==1) ans=a;

    cout << ans << "\n";
    return 0;
}