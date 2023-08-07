#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vl;
double eps = 1e-12;

#define cpyook ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define forn(i,e) for(ll i = 0; i < e; i++)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

bool cmp(pair<int, int> &a, pair<int, int> &b) {
    if(a.fi != b.fi) 
        return (a.fi > b.fi);
    else
        return (a.se > b.se);
}

void solve(){
}

int main() {
    cpyook
    int n; cin >> n;
    int p[n], w[n];

    forn(i, n) cin >> p[i];
    forn(i, n) cin >> w[i];

    vector<pair<int, int>> vii;

    forn(i, n) {
        vii.pb(mp(p[i], w[i]));
    }

    sort(vii.begin(), vii.end(), cmp);
    // for(auto x: vii) {
    //     cout << x.fi << " " << x.se << ln;
    // }

    priority_queue <int> pq;
    ll ans=0, idx=1;
    int temp = vii[0].fi;
    pq.push(vii[0].se);
    while(temp>0) {
        while(idx<n && vii[idx].fi == temp) {
            pq.push(vii[idx].se);
            idx++;
        }

        if(!pq.empty()) {
            ans += pq.top();
            pq.pop();
        }
        temp--;
    }



    // for(int i=0; i<n-1; i++) {
    //     int next = i+1;
    //     if(vii[i].fi <= vii[next].fi) {
    //         if(vii[i].se < vii[next].se) {
    //             int tempA = vii[next].fi;
    //             int tempB = vii[next].se;
    //             vii[next].fi = vii[i].fi;
    //             vii[next].se = vii[i].se;

    //             vii[i].fi = tempA;
    //             vii[i].se = tempB;
    //         }
    //         vii[next].fi--;
    //     }

    //     // cout << i << " " << next << " " << vii[i].fi << " " << vii[i].se << ln;
    //         // dbg(vii[i].se);
    // }

    // forn(i, n) {
    //     if(vii[i].fi>0) 
    //         ans += vii[i].se;        
    // }


    // int idx, next;
    // for(int i=0; i<n; i++) {
    //     idx = i;
    //     next = i+1;
    //     while(next<n && vii[i].fi == vii[next].fi) {
    //         if(vii[idx].se < vii[next].se) {
    //             int tempA = vii[next].fi;
    //             int tempB = vii[next].se;
    //             vii[next].fi = vii[idx].fi;
    //             vii[next].se = vii[idx].se;

    //             vii[idx].fi = tempA;
    //             vii[idx].se = tempB;
    //             // vii[idx].fi--;
    //         }

    //         vii[next].first--;
    //         next++;
    //     }

    //     if(vii[idx].fi > 0)
    //         ans += vii[idx].se;
    //         // dbg(vii[idx].se);
    // }

    // for(auto x: vii) {
    //     cout << x.fi << " " << x.se << ln;
    // }

    // dbg(ans);
    cout << ans << ln;

    return 0;
}