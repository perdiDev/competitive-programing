#include <bits/stdc++.h>
using namespace std;

int n, hasil;

int main() {
    // ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> n;
    hasil = n/2 + n/3 + n/4;
    if(hasil>=n){
        cout << hasil << endl;
    }
    else {
        cout << n << endl;
    }

    return 0;
}