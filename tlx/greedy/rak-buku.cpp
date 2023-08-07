#include <bits/stdc++.h>
using namespace std;

#define cpyook ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl "\n"

int main() {
    cpyook
    ll n, b;
    cin >> n >> b;
    vector<ll> v(n);

    for(int i=0; i<n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    ll ans=0, tum=0;
    for(int i=n-1; i>=0; i--) {
        if(tum<b) {
            tum += v[i];
            ans++;
        }
    }

    cout << ans << endl;
    
    return 0;
}