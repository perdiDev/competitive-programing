// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int n, a, b, c;

    cin >> n >> a >> b >> c;
    if((n%a==0 && n%b!=0) || n%c==0) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}