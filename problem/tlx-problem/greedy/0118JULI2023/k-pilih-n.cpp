#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, k;
    cin >> n >> k;
    vector<ll> arr(n);

    for(int i=0; i<n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    ll ans=LONG_MAX;
    // if(k==1) {
    //     cout << ans << "\n";
    //     return 0;
    // }
    for(int i=0; i<n-k+1; i++) {
        // cout << arr[i+(k-1)] << " " << arr[i] << "\n";
        ans = min(ans, arr[i+(k-1)]-arr[i]);
    }
    cout << ans << "\n";

    return 0;
}