#include <bits/stdc++.h>
using namespace std;

int Q, N, M;
string peserta, pesertaN[81], pesertaM[81];
int hasil[81][3];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> Q;
    for(int i=0;i<Q;i++){
        cin >> N >> M;
        cin >> peserta;
        for(int j=0;j<N;j++){
            cin >> pesertaN[j];
            for(int k=0;k<3;k++) {
                cin >> hasil[j][k];
            }
        }

        // Cari index peserta
        int idxPeserta = 0;
        for(int l=0;l<N;l++) {
            if(peserta == pesertaN[l]) idxPeserta = l;
        }
        
        // Urutin
        int menang = 0;
        for(int i=0;i<N;i++) {
            if(idxPeserta == i) continue;
            if(hasil[idxPeserta][2] > hasil[i][2]) menang++;
            else if(hasil[idxPeserta][2] == hasil[i][2]) {
                if(hasil[idxPeserta][1] > hasil[i][1]) menang++;
                else if(hasil[idxPeserta][1] == hasil[i][1]) {
                    if(hasil[idxPeserta][0] > hasil[i][0]) menang++;
                }
            }
        }

        if((N-menang) <= M) {
            cout << "YA" << "\n";
        } else {
            cout << "TIDAK" << "\n";
        }
    }

    return 0;
}