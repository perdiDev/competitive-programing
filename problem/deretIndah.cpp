#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, n, d;
    cin >> s >> n >> d;

    while(n--){
        cout << s << "\n";
        s += d;
    }

    return 0;
}