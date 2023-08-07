#include <iostream>
using namespace std;

int absolutePangkat(int a, int b, int d) {
    int x = a - b;
    if(x < 0) {
        x *= -1;
    }
    int sum = x;
    while(d > 1) {
        sum *= x;
        d--;
    }
    return sum;
}

int main() {
    int N, D, hasil;
    cin >> N >> D;
    int X[N][2];

    for(int i=0; i<N; i++){
        for(int j=0; j<2; j++){
            cin >> X[i][j];
        }
    }

    int min = 2000000, max = 0;
    for(int i=0; i<N; i++){
        for(int j=i; j<N; j++){
            if(i == j) {
                continue;
            }
            hasil = absolutePangkat(X[i][0], X[j][0], D) + absolutePangkat(X[i][1], X[j][1], D);
            if(hasil > max) {
                max = hasil;
            }
            if(hasil < min) {
                min = hasil;
            }
            // cout << X[i][0] << " " << X[j][0] << " " << hasil << endl << "_" << endl;
        }
    }
    cout << min << " " << max;

    return 0;
}