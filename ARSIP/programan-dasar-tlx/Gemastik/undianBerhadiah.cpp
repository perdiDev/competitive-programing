#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    int n, hadiah, nilai;
    vector <int> pemenang;

    cin >> n >> hadiah;
    int peserta[n];
    
    for(int i=0;i<n;i++) {
        cin >> nilai;
        peserta[i] = nilai;
    }

    int min = 89999, hasil;
    for(int i=0;i<n; i++) {
        hasil = abs(peserta[i] - hadiah);
        if(hasil < min) {
            min = hasil;
        }
    }

    for(int i=0;i<n; i++) {
        hasil = abs(peserta[i] - hadiah);
        if(hasil == min) {
            pemenang.push_back(peserta[i]);
        }
    }

    int banyakPemenang = pemenang.size();
    for(int i=0; i<banyakPemenang; i++) {
        cout << pemenang[i] << endl;
    }

    return 0;
}