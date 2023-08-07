#include <bits/stdc++.h>
using namespace std;

#define cpyook ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl "\n"

int main() {
    cpyook
    ll n, q, t;
    cin >> n;
    vector<ll> vl(n);

    ll sum=0;
    for(int i=0; i<n; i++) {
        cin >> vl[i];
        sum += vl[i];
        vl[i] = sum;
    }

    cin >> q;
    while(q--) {
        cin >> t;

        ll a=0, b=n-1, ans=-1;
        while(a<=b) {
            ll mid = (a+b)/2;

            if(t>=vl[mid]) {
                a=mid+1;
                ans=mid;
            } 
            else
                b=mid-1;

        }

        cout << ans+2 << endl;
    }

    // STL
    // while(q--) {
    //     cin >> t;
    //     cout << lower_bound(vl.begin(), vl.end(), t) - vl.begin() + 1 << endl;
    // }

    // Time Limit
    // for(ll i=0;i<n; i++) 
    //     cin >> vl[i];

    // cin >> q;
    // while(q--) {
    //     cin >> t;
    //     ll sum=0, ans=0;
    //     for(ll i=0; i<n; i++) {
    //         // printf("i=%ld sum=%d next=%d\n", i, sum, vl[i]);
    //         if(t>sum && t<=sum+vl[i]) {
    //             ans = i+1;
    //             break;
    //         }
    //         sum += vl[i+1];
    //     }
    //     cout << ans << endl;
    // }
    
    return 0;
}