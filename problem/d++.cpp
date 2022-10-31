#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i=1;
    cin >> n;

    while(n & (n+1)){
        n++;
        i++;
    }

    cout << i << "\n";

    return 0;
}