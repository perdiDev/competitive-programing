#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 998244353;

ll operasiXOR(ll n, ll *arr) {
    if(n>2000) return 0;

    ll ans=1;
    for(ll i=0; i<n; i++) {
        for(ll j=i+1; j<n; j++) {
            // if(arr[i]==arr[j]) return 0;
            ans = ans* (arr[i] ^ arr[j])%MOD;
        }
    }

    return ans%MOD;
}

int main() {
    ll n;
    cin >> n;
    ll arr[n];

    for(ll i=0; i<n; i++) cin >> arr[i];

    cout << operasiXOR(n, arr) << "\n";


    return 0;
}