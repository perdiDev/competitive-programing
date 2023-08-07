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
    ll n; cin >> n;
    ll a[n];

    ll sum=0;
    forn(i, n) {
        cin >> a[i];
        sum += a[i];
    }

    ll r = sum / n;

    ll idx1, idx2, idx=0;
    forn(i, n) {
        if(a[i] != r) {
            if(idx == 0) {
                idx1 = i;
            } 
            else if(idx == 1)
                idx2 = i;
            else {
                cout << "TIDAK SESUAI" << ln;
                return 0;
            }
            idx++;
        }
    }

    // dbg(a[idx1]);
    // dbg(a[idx2]);

    if(idx == 0)
        cout << "SESUAI" << ln;
    else if(idx == 2) {
        // cout << (abs(a[idx1] - a[idx2])) << ln;
        cout << (abs(a[idx1] - r)) << " ";
        if(a[idx1] > a[idx2]) 
            cout << idx1 +1 << " " << idx2 +1 << ln;
        else 
            cout << idx2 +1 << " " << idx1 +1 << ln;
    }
    else 
        cout << "TIDAK SESUAI" << ln;


    return 0;
}