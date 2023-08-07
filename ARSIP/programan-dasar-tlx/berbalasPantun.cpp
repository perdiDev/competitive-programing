#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, detik;
    cin >> n;

    long long sum;
    for(int i=0;i<n;i++){
        cin >> detik;
        sum += n*detik;
    }

    for(int i=0;i<n;i++){
        cin >> detik;
        sum += n*detik;
    }

    cout << sum << "\n";

    return 0;
}