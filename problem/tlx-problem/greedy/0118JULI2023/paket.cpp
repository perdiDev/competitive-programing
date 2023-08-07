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
 

void solve(){
}

int main() {
    cpyook

    ll n, pos, a;
    vi p;

    cin >> n;
    forn(i, n) {
        cin >> a;
        pos = lower_bound(all(p), a)-p.begin();
        dbg(pos);
        if(p.size() == pos)
            p.pb(a);
        else
            p[pos] = a;
    }

    cout << p.size() << ln;

    return 0;
}
