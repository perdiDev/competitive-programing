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
    int x; cin >> x;
    int a[3];
    forn(i, 3) cin >> a[i];

    sort(a, a+3);

    int ans=0;
    // Optimal O(1)
    int sisa;
    sisa = x%(a[0]+a[1]+a[2]);
    ans = x/(a[0]+a[1]+a[2]) * 3;

    if(sisa/a[0] != 0) {
        ans++;
    }
    if(sisa/a[1] != 0) {
        ans++;
    }

    // Optimal O(n)
    // while(x>0) {
    //     if(x/a[0] != 0) {
    //         x -= a[0];
    //         ans++;
    //     } else break;
    //     if(x/a[1] != 0) {
    //         x -= a[1];
    //         ans++;
    //     } else break;
    //     if(x/a[2] != 0) {
    //         x -= a[2];
    //         ans++;
    //     } else break;
    // }

    cout << ans << ln;

    return 0;
}