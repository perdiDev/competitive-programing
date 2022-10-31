#include <bits/stdc++.h>
using namespace std;

int n, p, q, m;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n;
    while(n--){
        cin >> p >> q >> m;
        while(m--) {
            if(p >= q) {
                p /= 2;
            } else {
                q /= 2;
            }
        }
        int temp;
        if(p < q) {
            // temp = p;
            // p = q
            swap(p, q);
        }
        cout << p << " " << q << "\n";
    }

    return 0;
}