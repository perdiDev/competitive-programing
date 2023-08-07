#include <bits/stdc++.h>
using namespace std;

int n, x;
int dataBerat[1001], dataHarga[1001];
double dataSatuanHarga[1001];

void sortDataHarga() {
    double tempDSH;
    int  tempDB, tempDH;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(dataSatuanHarga[i] > dataSatuanHarga[j]){
                tempDSH = dataSatuanHarga[i];
                dataSatuanHarga[i] = dataSatuanHarga[j];
                dataSatuanHarga[j] = tempDSH;

                tempDB = dataBerat[i];
                dataBerat[i] = dataBerat[j];
                dataBerat[j] = tempDB;

                tempDH = dataHarga[i];
                dataHarga[i] = dataHarga[j];
                dataHarga[j] = tempDH;
            }
        }
    }
}

int main() {
    double nilai;
    cin >> n >> x;

    for(int i=0; i<n;i++) {
        cin >> dataBerat[i];
    }
    for(int i=0; i<n;i++) {
        cin >> dataHarga[i];
    }

    for(int i=0; i<n;i++) {
        nilai = (double) dataHarga[i]/dataBerat[i];
        dataSatuanHarga[i] = nilai;
    }

    sortDataHarga();

    int k= 0;
    double poyaPoya = 0;
    while(x>0){
        if(x>=dataBerat[k]){
            poyaPoya += dataHarga[k];
            x -= dataBerat[k];
            // cout << poyaPoya << "->";
        } else {
            poyaPoya += x * dataSatuanHarga[k];
            // cout << poyaPoya << "->";
            x -= x;
        }
        k++;
    }
    // cout << endl;

    printf("%.5lf\n", poyaPoya);

    return 0;
}