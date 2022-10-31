#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, m, a;
    cin >> n >> m;

    int meja[n];
    for(int i=0;i<n;i++) {
        meja[i] = 0;
    }

    while(m--) {
        cin >> a;
        for(int i=0;i<n;i++) {
            if(a == (i+1)){
                meja[i] +=1;
            }
        }
    }

    int jumlah;
    for(int i=0;i<n;i++){
        // cout << meja[i] << " ";
        if(meja[i]%4 >= 2 && meja[i]%4 <= 3) {
            jumlah++;
        }
    }
    cout << jumlah;

    return 0;
}