// #pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
// #pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <unordered_map>
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
 
bool cmp(pair<char, int> &a, pair<char, int> &b) {
    return a.second > b.second;
}

int main() {
    cpyook
    int n, ans=0;
    string s;
    map<char, int> um;
    vector<pair<char, int>> vp;

    cin >> n;
    cin >> s;


    forn(i, n) {
        if(um.find(s[i]) == um.end())
            um[s[i]] = 0;
        else
            um[s[i]]++;
    }

    for(auto x: um) {
        vp.push_back(x);
    }

    // cout << vp.size() << "+\n" << ln ;
    if(vp.size() < 3) {
        cout << ans-1 << ln;
        return 0;
    }

    sort(vp.begin(), vp.end(), cmp);

    ans = 3*(vp[2].second+1);

    if(vp[1].second > vp[2].second)
        ans += 2;

    else if(vp[0].second > vp[1].second)
        ans += 1;

    cout << ans << ln;

    return 0;
}