#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vl;
double eps = 1e-12;
const ll mod = 1e9+7;

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
 
vector<vector<ll>> matriksPow(vector<vector<ll>> m1, vector<vector<ll>> m2) {
    vector<vector<ll>> res(2, vector<ll>(2, 0));
    for(ll i=0; i<2; i++) {
        for(ll j=0; j<2; j++) {
            for(ll k=0; k<2; k++) {
                res[i][j] += m1[i][k]%mod * m2[k][j]%mod;
                res[i][j] %= mod;
            }
        }
    }
    retrun res;

}

vector<vector<ll>> matriksPow(vector<vector<ll>> a, ll n) {
    vector<vector<ll>> res {{1, 1}, {1, 0}};
    while(n) {
        if(n & 1) 
            res = matriksMul(res, a);
    }

}

int main() {
    cpyook
    int n;cin >> n;

    vector<vector<ll>> a {{1, 1}, {1, 0}}, res;
    res = matriksPow(a, n);

    return 0;
}