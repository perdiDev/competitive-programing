#include <bits/stdc++.h>
using namespace std;

int papan[26][26];
int M, N, B, K, T=1;
int dilalui[26][26];

void breaker(int baris, int kolom) {
    cout << "-> "<< baris << " "<< kolom << "\n";
    if((baris >= 0 || baris < M) && (kolom >= 0 && kolom < N)) {
        // Cek baris kanan
        if(papan[baris][kolom] == papan[baris+1][kolom] && dilalui[baris+1][kolom]) {
            T++;
            dilalui[baris][kolom] = 0;
            breaker(baris+1, kolom);
        }
        // Cek baris kiri
        if(papan[baris][kolom] == papan[baris-1][kolom] && dilalui[baris-1][kolom]) {
            T++;
            dilalui[baris][kolom] = 0;
            breaker(baris-1, kolom);
        }
        // Cek atas
        if(papan[baris][kolom] == papan[baris][kolom+1] && dilalui[baris][kolom+1]) {
            T++;
            dilalui[baris][kolom] = 0;
            breaker(baris, kolom+1);
        }
        // Cek bawah
        if(papan[baris][kolom] == papan[baris][kolom-1] && dilalui[baris][kolom-1]) {
            T++;
            dilalui[baris][kolom] = 0;
            breaker(baris, kolom-1);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int nilai;
    cin >> M >> N;
    // Isikan nilai papan
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            cin >> papan[i][j];
        }
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            dilalui[i][j] = 1;
        }
    }
    // Masukkan titik awal
    cin >> B >> K;

    breaker(B-1, K-1);
    cout << (T-1) * T;
}