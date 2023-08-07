#include <bits/stdc++.h>
using namespace std;

#define cpyook ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl "\n"

ll bigPower(ll a, ll b, ll n) {
    if(b==0) return 1;

    ll ans = bigPower(a, b/2, n)%n;
    ans = (ans*ans)%n;

    if(b%2==1) 
        ans = ans*(a%n);

    ans %= n;
    return ans;
}

int main() {
    cpyook
    ll a, b, c, n;
    cin >> a >> b >> c >> n;

    for(ll i=1; i<=c; i++) {
        a = bigPower(a, b, n);
    }

    cout << a+1 << endl;
    
    return 0;
}