#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, bintang;
    cin >> n >> m;

    bintang = n*m - max(n, m);
    cout << bintang << "\n";

    return 0;
}