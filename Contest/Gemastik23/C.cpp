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

string decript2(char a, char b) {
    string ra="";
    if(a == 'A') {
        if(b == 'A') 
            ra = "CD";
        else if(b == 'B')
            ra = "BB";
        else if(b == 'C')
            ra = "AC";
        else 
            ra = "CC";
    }
    else if(a == 'B') {
        if(b == 'A') 
            ra = "CB";
        else if(b == 'B')
            ra = "DB";
        else if(b == 'C')
            ra = "AD";
        else 
            ra = "DD";
    }
    else if(a == 'C') {
        if(b == 'A') 
            ra = "DA";
        else if(b == 'B')
            ra = "DC";
        else if(b == 'C')
            ra = "BC";
        else 
            ra = "BD";
    }
    else {
        if(b == 'A') 
            ra = "AA";
        else if(b == 'B')
            ra = "BA";
        else if(b == 'C')
            ra = "CA";
        else 
            ra = "AB";
    }
    return ra;
}

string decript1(char a, char b) {
    string ra="";
    if(a == 'A') {
        if(b == 'A') 
            ra = "AB";
        else if(b == 'B')
            ra = "DC";
        else if(b == 'C')
            ra = "CC";
        else 
            ra = "CB";
    }
    else if(a == 'B') {
        if(b == 'A') 
            ra = "CA";
        else if(b == 'B')
            ra = "DA";
        else if(b == 'C')
            ra = "CD";
        else 
            ra = "DD";
    }
    else if(a == 'C') {
        if(b == 'A') 
            ra = "BC";
        else if(b == 'B')
            ra = "AA";
        else if(b == 'C')
            ra = "BA";
        else 
            ra = "DB";
    }
    else {
        if(b == 'A') 
            ra = "BD";
        else if(b == 'B')
            ra = "AD";
        else if(b == 'C')
            ra = "BB";
        else 
            ra = "AC";
    }
    return decript2(ra[0], ra[1]);
}
 

void solve(){
}

int main() {
    cpyook
    string s; cin >> s;
    string ab = "ABCD";

    string ans = "";
    for(int i=0; i<s.length(); i+=2) {
        string temp = "";
        temp += s[i];
        temp += s[i+1];
        // ans += decript1(s[i], s[i+1]);
        forn(j, 4) {
            forn(k, 4) {
                if(temp == decript1(ab[j], ab[k])) {
                    // dbg(ab[j]);
                    // dbg(ab[k]);
                    ans += ab[j];
                    ans += ab[k];
                }
            }
        }
    }

    cout << ans << ln;

    return 0;
}