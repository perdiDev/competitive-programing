#include <bits/stdc++.h>
using namespace std;

int N, k;

bool isPrime(int p) {
    bool prim = true;
    for(int i=2;i<p-1;i++) {
        if((p%i) == 0) prim = false;
    }
    return prim;
}

int getK(int k) {
    int awal = 0, i=2, nilaiPrima=2;
    while(awal < k) {
        // Perulangan mencari nilai prima
        if(isPrime(i)) {
            nilaiPrima=i;
            awal++;
        }
        i++;
    }
    return nilaiPrima;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> k;
        
        cout << getK(k) << endl;
    }

    return 0;
}