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
    ll n, d; cin >> n >> d;
    ll a[n];
    forn(i, n) cin >> a[i];

    sort(a, a+n);
    reverse(a, a+n);

    ll w=0, ans = 0;
    forn(i, n) {
        ll temp = d/a[i] +1;
        if((temp+w) > n) break;
        else w+=temp, ans++;
    }

    // ll st=0, en=n-1, ans=0;
    // while(st < en) {
    //     ll temp = a[en];
    //     ll sum = temp;
    //     while(st < en && sum <= d) {
    //         sum += temp;
    //         st++;
    //     }
    //     if(sum > d) {
    //         ans++;
    //     }
    //     en--;
    // }

    cout << ans << ln;

    return 0;
}