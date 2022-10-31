#include <bits/stdc++.h>
using namespace std;
int data[101][101];
short N, M, K;

int cek(int baris, int kolom){
    int sum = 1;
    // Cek kanan
    if(kolom < M-1) {
        sum *= data[baris][kolom+1];
    }
    if(kolom > 0) {
        sum *= data[baris][kolom-1];
    }
    if(baris < N-1) {
        sum *= data[baris+1][kolom];
    }
    if(baris > 0) {
        sum *= data[baris-1][kolom];
    }
    return sum;
}

int main() {
    cin >> N >> M >> K;

    int nilai;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin >> nilai;
            data[i][j] = nilai;
        }
    }

    // Cek semua kemungkina
    int kolom = 101, baris = 101;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(cek(i, j) == K) {
                if(j < kolom) {
                    kolom = j;
                    baris = i;
                }
                else if(j == kolom) {
                    if(i < baris) {
                        baris = i;
                        kolom = j;
                    }
                }
            }
        }
    }
    if(kolom == 101){
        kolom = 0;
        baris = 0;
    } else {
        kolom += 1;
        baris += 1;

    }

    cout << baris << " " << kolom;


    return 0;
}