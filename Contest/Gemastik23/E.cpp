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
    ll n, a; cin >> n;
    set <ll> s;
    vector<ll> ar(n);

    forn(i, n) {
        cin >> a;
        s.insert(a);
    }

    ll j=0;
    for(auto i: s) ar[j++] = i;
    ar.resize(s.size());

    ll i=0;
    for(; i<ar.size()-1; ) {
        cout << ar[i];
        if(ar[i]+1==ar[i+1]) {
            cout << "-";
            while(i<(ar.size()-1) && ar[i]+1==ar[i+1]) i++;
        }
        else {
            cout << ",";
            i++;
        }
    }
    // cout << ar[ar.size()-1] << ln;
    cout << ar[i] << ln;




    // for(; i<ar.size(); i++) {
    //     cout << ar[i];
    //     if(i != ar.size()-1 && ar[i]+1 == ar[i+1]) {
    //         cout << "-";
    //         while(ar[i]+1 == ar[i+1]) {
    //             i++;
    //             if(i==ar.size()-1) {
    //                 cout << ar[i];
    //             }
    //         }
    //     }
    // }

    return 0;
}