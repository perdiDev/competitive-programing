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
#define dbg2(x, y) cout<<#x<<" = "<<x<< " " <<#y<<" = "<<y<< ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

// ll checkMin(string s, int n) {
//     ll ans = 0;
//     for(int i=n-1; i>=0; i--) {
//         for(int j=i-1; j>=0; j--) {
//             if(s[i]=='0' && s[j]=='1') {
//                 // dbg2(s[i], s[j]);
//                 ans++;
//             }
//         }
//     }
//     return ans;
// }

int main() {
    cpyook
    int n, k; cin >> n >> k;
    string s, tempStr; cin >> s;

    vector<ll> a, b;
    forn(i, n) {
        if(s[i]=='0') a.pb(i);
        if(s[i]=='1') b.pb(i);
    }
    ll aSize = a.size(),
       bSize = b.size();

    ll ans=LLONG_MAX, curr;
    if(min(aSize, bSize)<=k) ans=0;
    else {
        for(ll i=0; i<=k; i++) {
            auto x=a, y=b;
            x.erase(x.end()-min(k-i, (ll)y.size() ), x.end());
            y.erase(y.begin(), y.begin()+min(i, (ll)y.size() ));
            curr = 0;
            for(auto z:x) {
                curr += lower_bound(y.begin(), y.end(), z)-y.begin();
            }
            ans = min(ans, curr);
        }
    }


    // int temp = k;
    // tempStr = s;
    // for(int i=0; i<n; i++) {
    //     if(s[i]=='1' && k) {
    //         s[i] = '0';
    //         k--;
    //     }
    // }
    // ll ans = checkMin(s, n);

    // k = temp;
    // s = tempStr;
    // for(int i=n-1; i>=0; i--) {
    //     if(s[i]=='0' && k) {
    //         s[i] = '1';
    //         k--;
    //     }
    // }
    // ans = min(ans, checkMin(s, n));

    cout << ans << ln;

    return 0;
}