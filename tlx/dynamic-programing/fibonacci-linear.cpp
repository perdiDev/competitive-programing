#include <bits/stdc++.h>
using namespace std;

#define cpyook ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl "\n"

ll fib(ll n) {
    if(n==0) return 0;
    ll fib[n];

    fib[0] = 0;
    fib[1] = 1;

    for(ll i=2; i<=n; i++) {
        fib[i] = fib[i-2] + fib[i-1];
    }
    
    return fib[n];
}

int main() {
    cpyook

    ll t; cin >> t;

    while(t--) {
        ll n; cin >> n;

        cout << fib(n) << endl;
    }

    return 0;
}