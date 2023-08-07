#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main() {
    ll n, ans=0;
    string a, b;

    cin >> n >> a >> b;
    
    for(ll i=0; i<n; i++) {
        if(int(a[i])>int(b[i])) {
            ans++;
            while(int(a[i])>=int(b[i]) && i<n) {
                i++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}