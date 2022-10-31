#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    bool cek = false;
    cin >> n;

    while(n > 0){
        if(n%10 == 0) {
            cek = true;
        }
        n /=10;
    }

    if(cek) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }

    return 0;
}