#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string ayam;
    cin >> n;

    string nama[n];
    for(int i=0; i<n;i++){
        cin >> ayam;
        nama[i] = ayam;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            string namaI = nama[i];
            string namaJ = nama[j];
            if(i == j) continue;
            if(nama[i].length() == nama[j].length()){
                for(int k=0; k<nama[i].length(); k++){
                    if(namaI[k] > namaJ[k]){
                        break;
                    }
                    else if(namaI[k] < namaJ[k]){
                        nama[i] = namaJ;
                        nama[j] = namaI;
                        break;
                    }
                }
            }
            else if(nama[i].length() < nama[j].length()) {
                nama[i] = namaJ;
                nama[j] = namaI;
            }
            // cout << nama[i] << "-" << nama[j] << "\n";
        }        
    }

    for(int i=0;i<n;i++){
        // cout << "---------" << endl;
        cout << nama[i] << "\n";
        // cout << "->" << nama[i].length() << "\n";
    }

    return 0;
}