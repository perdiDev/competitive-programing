#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    long long ans=0, in;
    string s;

    cin >> q;
    while(q--) {
        cin >> s;
        if(s == "donate") {
            cin >> in;
            ans += in;
        } else if(s== "report") {
            cout << ans << "\n";
        }
    }

    return 0;
}