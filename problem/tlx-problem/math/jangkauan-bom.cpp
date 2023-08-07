#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int main() {
    ll tarX, tarY, n;
    cin >> tarX >> tarY >> n;
    vector<ll> dis(n);

    ll posX, posY;
    for(ll i=0; i<n; i++) {
        cin >> posX >> posY;
        dis[i] = pow(posX-tarX, 2) + pow(posY-tarY, 2);
        // cout << dis[i] << endl;
    }

    sort(dis.begin(), dis.end());
    ll q;
    cin >> q;
    vector<ll> rad(q);

    for(int i=0; i<q; i++) {
        cin >> rad[i];
        rad[i] = pow(rad[i], 2);
    }

    for(int i=0; i<q; i++) {
        ll ans=0;
        ll a=0, b=n-1;
        
        while(a<=b) {
            ll mid = (a+b)/2;

            if(dis[mid] <= rad[i]) {
                ans = mid+1;
                a=mid+1;
            } else {
                b = mid-1;
            }
        }

        cout << ans << endl;
    }


    return 0;
}