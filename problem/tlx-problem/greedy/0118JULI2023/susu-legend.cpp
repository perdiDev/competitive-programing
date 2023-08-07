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

    int idx=0;
    for(int i=0; i<n && idx<n; i++) {
        while(idx<n && a[idx] != b[i]) idx++;
    }

    if(idx<n) cout << "YES" << ln;
    else cout << "NO" << ln;

    

    return 0;
}