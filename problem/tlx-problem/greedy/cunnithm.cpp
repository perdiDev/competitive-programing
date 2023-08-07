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
    int n, m; cin >> n >> m;

    ll l, r, x=1;
    ll ans=0;
    forn(i, n) {
        cin >> l >> r;
        if(x<l || x>r) {
            ans += min(abs(x-l), abs(x-r));
            // dbg(abs(x-l));
            // dbg(abs(x-r));
            if(abs(x-l) >= abs(x-r))
                x = r;
            else
                x = l;
        }
    }

    cout << ans << ln;
    

    return 0;
}