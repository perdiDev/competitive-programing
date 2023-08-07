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
 
// const int NMAX = 200001;
// int a[NMAX], b[NMAX], sel[NMAX], sdh[NMAX];

void solve(){
}

int main() {
    cpyook

    int n, x, temp;
    cin >> n >> x;
    vi a(n), b(n), sdh(n, 0);
    vector<pair<int, int>> vii(n);
    temp = x;
    forn(i, n) cin >> a[i];
    forn(i, n) cin >> b[i];
    forn(i, n) sdh[i] = 0;
    forn(i, n) {
        vii[i].fi = abs(a[i]-b[i]);
        vii[i].se = i;
    }

    sort(vii.begin(), vii.end());

    ll jon=0, djo=0, ans;
    forn(i, n) {
        if(a[i] <= b[i]) {
            jon += a[i];
            sdh[i] = 1;
            temp--;
        }
        else
            jon += b[i];
    }

    forn(i, temp) {
        if(sdh[vii[i].se] == 0) {
            jon -= b[vii[i].se];
            jon += a[vii[i].se];
        }
    }
    dbg(jon);

    forn(i, n) sdh[i] = 0;
    temp = x;
    forn(i, n) {
        if(a[i] >= b[i]) {
            djo += a[i];
            sdh[i] = 1;
            temp--;
        }
        else
            djo += b[i];
    }
    
    // reverse(vii.begin(), vii.end());
    forn(i, temp) {
        if(sdh[vii[i].se] == 0) {
            djo -= b[vii[i].se];
            djo += a[vii[i].se];
        }
    }

    ans = abs(jon - djo);
    dbg(jon);
    dbg(djo);

    cout << ans << ln;

    return 0;
}