#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, l, w,h;
    cin >> t;
    for(int i=1; i<=t; i++) {
        cin >> l >> w >> h;
        printf("Case %d: ", i);
        if(l >= 20 && l==w && l==h)
            cout << "good\n";
        else cout << "bad\n";
    }
    return 0;
}