#include <bits/stdc++.h>
using namespace std;

int N, F;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> N >> F;
    string nama, daftarNama[1000];
    int nomor, daftarNomor[1000];

    for(int i=0;i<N;i++) {
        cin >> nama >> nomor;
        daftarNama[i] = nama;
        daftarNomor[i] = nomor;
    }

    for(int i=0;i<F;i++) {
        cin >> nama;
        nomor = 0;
        for(int j=0;j<N;j++){
            if(nama==daftarNama[j]){
                nomor = daftarNomor[j];
            }
        }
        if(nomor){
            cout << nomor << endl;
        } else {
            cout << "NIHIL" << "\n";
        }
    }


    return 0;
}