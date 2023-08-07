#include <iostream>
using namespace std;

int fungsiKomp(int A, int B, int x) {
    int hasil = (A * x) + B;
    if(hasil < 0) {
        hasil *= -1;
    }
    return hasil;
}

int main() {
    int A, B, K, x, fk;
    cin >> A >> B >> K >> x;

    fk = x;
    for(int i=0; i<K; i++) {
        fk = fungsiKomp(A, B, fk);
    }

    cout << fk;

    return 0;
}