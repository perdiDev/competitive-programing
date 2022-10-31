#include <bits/stdc++.h>
using namespace std;

int a, x, maj, netim;

int main() {
    cin >> a >> x;

    maj = x/a;
    netim = x%a;

    cout << maj << " " << netim;

    return 0;
}