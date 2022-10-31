#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, j, m, d;
    cin >> n;

    j = n/3600;
    m = (n-(j*3600))/60;
    d = n-j*3600-m*60;

    cout << j << "\n";
    cout << m << "\n";
    cout << d << "\n";
    // cout << n / 60 << "\n";

    return 0;
}