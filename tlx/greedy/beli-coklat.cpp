#include <bits/stdc++.h>
using namespace std;

#define cpyook ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl "\n"

int main() {
    cpyook
    ll n, d;
    cin >> n >> d;
    vector<pair<ll, ll>> vp(n);
    
    for(int i=0; i<n; i++) 
        cin >> vp[i].first >> vp[i].second;

    sort(vp.begin(), vp.end());

    ll ans=0;
    for(int i=0; i<n; i++) {
        ll inc = d/vp[i].first;
        if(inc <= 0) break;
        if(inc >= vp[i].second) {
            d -= (vp[i].first*vp[i].second);
            ans += vp[i].second;
        } else {
            d -= (vp[i].first*inc);
            ans += inc;
        }
    }

    // Wrong answer
    // ll ans=0, temp=0, h=0;
    // while(h<n) {
    //     temp += (vp[h].first*vp[h].second);
    //     // printf("h=%ld harga=%ld jumlah=%ld temp=%ld ans=%ld\n", h, vp[h].first, vp[h].second, temp, ans);

    //     if(temp>d) {
    //         temp -= (vp[h].first*vp[h].second);

    //         while(vp[h].second-- && (temp+vp[h].first)<=d) {
    //             ans++;
    //             temp+= vp[h].first;
    //         }
    //         break;
    //     } else {
    //         ans += vp[h].second;
    //         h++;
    //     }
    // }


    // Time limit
    // ll ans=0, h=0, temp=vp[h].first;
    // while(temp <= d && h<n) {
    //     ans++;
    //     // cout << h << " " << temp << " " << ans << endl;
    //     vp[h].second--;

    //     if(vp[h].second == 0) h++;
    //     temp += vp[h].first;
    // }

    cout << ans << endl;
    
    return 0;
}