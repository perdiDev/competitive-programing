#include <iostream>
using namespace std;

int main() {
    int n, m, nilai;
    cin >> m >> n;

    int matriks[m][n];

    for(int i = 0; i < m; i++) {
        for(int j = 0; j<n; j++) {
            cin >> nilai;
            matriks[i][j] = nilai;
        }
    }

    for(int k = 0; k < n; k++) {
        for(int l = m-1; l >= 0; l--) {
            cout << matriks[l][k] << " ";
        }
        cout << endl;
    }

    return 0;
}