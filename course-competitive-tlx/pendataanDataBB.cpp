#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);


    // Cara sederhana
    // int N, berat,daftarBerat[100001], q, x, y;
    // cin >> N;
    // for(int i=0;i<N;i++){
    //     cin >> berat;
    //     daftarBerat[i] = berat;
    // }
    // cin >> q;
    // while(q--) {
    //     cin >> x >> y;
    //     int daftar =0;
    //     int min=daftarBerat[0];
    //     int i=1;
    //     int nilai = 0;
    //     while(min<=x){
    //         min = daftarBerat[i];
    //         i++;
    //         nilai++;
    //     }
    //     cout << "-->"<< nilai << endl;
    //     int j = N-2;
    //     int max = daftarBerat[N-1];
    //     while(max>y) {
    //         max = daftarBerat[j];
    //         j--;
    //         nilai++;
    //     }
    //     cout << "-->"<< nilai << endl;
    //     daftar = N-nilai;
    //     cout << daftar << "\n";
    // }

    // Cara set (Lebih cepat O(logn))
    set<int> bebek;
    int N, value, q, x, y;

    cin >> N;
    while(N--) {
        cin >> value;
        bebek.insert(value);
    }

    cin >> q;
    while(q--){
        cin >> x >> y;
        int jumlah=0;
        for(set<int>::iterator it = bebek.upper_bound(x); it != bebek.upper_bound(y+1); it++) {
            jumlah++;
        }
        cout << jumlah << "\n";
    }

    return 0;
}