#include <bits/stdc++.h>
using namespace std;

int n, x;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int p, pemenang = 200001, min=400000;
    cin >> n >> x;

    for(int i=0;i<n;i++){
        cin >> p;
        if(abs(x-p) == min) {
            if(pemenang > p) {
                pemenang = p;
                min = abs(x-p);
            }
        }
        else if(abs(x-p) < min) {
            pemenang = p;
            min = abs(x-p);
        }
    }
    cout << pemenang;

    return 0;
}