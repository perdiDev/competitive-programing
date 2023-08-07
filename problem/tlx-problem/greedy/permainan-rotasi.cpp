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
    int n; cin >> n;
    int a[n], b[n];

    forn(i, n) cin >> a[i];
    forn(i, n) cin >> b[i];

    sort(a, a+n);
    sort(b, b+n);

    ll ans=0;
    int pA=n-1, pB= n-1;
    for(int i=n-1; i>=0; i--) {
        if(a[pA] >= b[pB]) {
            ans += a[pA];
            pA--;
        } else {
            ans += b[pB];
            pB--;
        }
    }

    cout << ans << ln;

    return 0;
}