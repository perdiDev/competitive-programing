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
    int n, k; cin >> n >> k;

    int a[n];
    forn(i, n) cin >> a[i];

    if(k==1) {
        cout << 0 << ln;
        return 0;
    }
    sort(a, a+n);
    vector<int> b(k);

    int prev=0, next=n-1;
    forn(i, n) dbg(a[i]);
    b[0] = a[0];
    dbg(b[0]);
    b[k-1] = b[n-1];
    for(int i=1; i<k-1; i++) {
        if( abs(a[prev+1]-a[prev]) >= abs(a[next]-a[next-1]) ) {
            prev++;
            b[i] = a[prev];
        } else {
            next--;
            b[i] = a[next];
        }
    }

    sort(b.begin(), b.end());
    forn(i, k) dbg(b[i]);
    ll sum=0;
    for(int i=0; i<b.size(); i++) {
        for(int j=i+1; j<b.size(); j++) {
            sum += abs(b[j]-b[i]);
        }
    }

    cout << sum << ln;

    return 0;
}