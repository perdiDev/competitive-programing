#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q, nilai, idx=1000001;

    cin >> n >> q;
    int data[n];

    for(int i=0;i<n;i++){
        cin >> nilai;
        data[i] = nilai;
    }

    // Cari
    for(int i=0;i<n/2;i++){
        if(q == data[i]) {
            idx = i;
            break;
        }
    }
    // cout << data.find(q);

    if(idx > 1000000)  {
        for(int i=n/2;i<n;i++){
            if(q == data[i]) {
                idx = i;
                break;
            }
        }
        if(idx > 1000000) cout << -1;
        else cout << idx;
    }
    else cout << idx;

    return 0;
}