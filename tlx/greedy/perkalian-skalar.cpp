#include <bits/stdc++.h>
using namespace std;

#define cpyook ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl "\n"

int main() {
    cpyook
    ll n; cin >> n;
    vector<ll> v1(n), v2(n);

    for(int i=0; i<n; i++) 
        cin >> v1[i];

    for(int i=0; i<n; i++) 
        cin >> v2[i];

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    reverse(v2.begin(), v2.end());

    ll ans=0;
    for(int i=0; i<n; i++) {
        ans += (v1[i] * v2[i]);
    }

    cout << ans << endl;
    
    return 0;
}