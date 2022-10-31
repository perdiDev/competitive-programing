#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, nilai;
    cin >> n;

    bool cek = false;
    for(int i=0; i<n; i++){
        cin >> nilai;
        if(nilai%2 == 0) {
            cek = true;
        }
    }

    if(cek) {
        cout << "YA" << "\n";
    } else {
        cout << "TIDAK" << "\n";
    }

    return 0;
}