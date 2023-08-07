#include <iostream>
#include <cmath>
using namespace std;

int fungsiKomp(int A, int B, int K, int x) {
    if(K == 0) {
        return x;
    } else {
        return abs(A*fungsiKomp(A, B, K-1, x) + B);
    }
}

int main() {
    int A, B, K, x;
    cin >> A >> B >> K >> x;

    cout << fungsiKomp(A, B, K, x);

    return 0;
}