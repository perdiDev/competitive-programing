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
    int n, k; cin >> n >> k;
    int a[n];
    forn(i, n) cin >> a[i];

    int ans=0, sum=0;
    for(int i=n-1; i>=0 && sum<k; i--) {
        sum += a[i];
        ans++;
    }

    if(sum<k) 
        cout << -1;
    else
        cout << ans;
    cout << "\n";
}

int main() {
    cpyook
    int t=1; 
    cin >> t;

    while(t--) solve();

    return 0;
}