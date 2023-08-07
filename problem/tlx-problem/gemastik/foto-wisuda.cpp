// #pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
// #pragma GCC optimize("unroll-loops")
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
 

int main() {
    cpyook
    string s, st;
    int t, n, k; 
    cin >> t;
    vector<string> org;

    forn(j, t) {
        org.clear();
        cin >> n;

        forn(i, n) {
            cin >> s;
            cin >> k;

            forn(l, k) {
                cin >> st;

                if(find(org.begin(), org.end(), st) != org.end()) {
                    org.push_back(st);
                    ans++;
                }
            }

            if(s=="dibantu" && k==org.size()) {
                ans++;
            }
        }

        dbg(ans);
    }

    // while(t--) {
    // // cout << t << ln;
    //     cin >> n;
    //     int ans=0;
    // //     // vector<string> org;
    // //     // bool dibantu = false;
    // //     cout << n << ln;

    //     while(n--) {
    //         char temp[8];
    //         int k;
    //         cin >> temp;
    //         cin >> k;

    //         cout << temp << ln;
    //         cout << k << ln;
    //         // while(k--) {
    //         //     cout << k << ln;
    //         // }
    // //         // if(temp == "dibantu" && dibantu==false) {
    // //         //     dibantu = true;
    // //         //     ans++;
    // //         // }

    // //         // string nama;
    // //         // while(k--) {
    // //         //     cin >> nama;
    // //         //     if(find(org.begin(), org.end(), nama) != org.end()) {
    // //         //         org.push_back(nama);
    // //         //         ans++;
    // //         //     }
    // //         // }
    //     }
    // }

    return 0;
}