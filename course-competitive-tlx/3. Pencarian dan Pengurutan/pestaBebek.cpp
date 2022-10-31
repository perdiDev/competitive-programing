#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios_base::sync_with_stdio(false); cin.tie();
    cin >> n;
    int urutanBebek[n];
    string nama[n];

    string namaB;
    for(int i=0;i<n;i++){
        cin >> namaB;
        nama[i] = namaB;
        int urutan = i+1;
        for(int j=i; j>=0; j--){
            string namaI = nama[i];
            string namaJ = nama[j];
            int ln = namaI.length();
            if(ln > namaJ.length()) {
                ln = namaJ.length();
            }
            if(i==j) continue;
            for(int k=0;k<ln;k++){
                if(namaI[k] < namaJ[k]){
                    urutan--;
                    break;
                }
                else if(namaI[k] > namaJ[k]){
                    break;
                }
            }
        }
        urutanBebek[i] = urutan;
    }

    for(int i=0; i<n;i++){
        cout << urutanBebek[i] << "\n";
    }

    return 0;
}