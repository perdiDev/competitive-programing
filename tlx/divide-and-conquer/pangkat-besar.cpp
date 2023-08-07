#include <bits/stdc++.h>
using namespace std;

#define cpyook ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl "\n"
#define MOD 1000000

ll bigPower(ll a, ll b) {
    if(b==0) return 1;
    if(b==1) return a%MOD;
    ll ans = bigPower(a, b/2);
    if(b%2==0) 
        return ((ans%MOD) * (ans%MOD))%MOD;
    else
        return ((((ans%MOD) * (ans%MOD))%MOD) * a%MOD)%MOD;
}

int sLen(int n) {
    int count=0;
    if(n==0) return 1;
    while(n>0) {
        count++;
        n /=10;
    }
    return count;
}

int main() {
    cpyook
    ll a, b;
    cin >> a >> b;

    if(pow(a, b) < MOD)
        cout << pow(a, b) << endl;
    else {
        int ans = bigPower(a, b);
        int lenA = sLen(ans);
        for(int i=0; i<6-lenA; i++) 
            cout << 0;
        cout << bigPower(a, b) << endl;
    }

    // int t; cin >> t;
    // while(t--) {
    //     ll ans; cin >> ans;
    //     int lenA = sLen(ans%MOD);
    //     for(int i=0; i<6-lenA; i++) 
    //         cout << 0;
    //     cout << ans%MOD << endl;

    // }
    
    return 0;
}