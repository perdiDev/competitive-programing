#include <iostream>
using namespace std;

int checkPrima(int prima) {
    int cekPrima;
    
    for(int i = 2; i <= prima;i++)  {
        if(prima%i == 0) {
            cekPrima++;
        }
    }

    if(cekPrima <= 2) {
        cout << "YA" << "\n";
    } else {
        cout << "BUKAN" << "\n";
    }

    return 0;
}

int main() {
    int n, prima;
    cin >> n;

    for(int i=0; i<n;i++) {
        cin >> prima;
        checkPrima(prima);
    }

    return 0;
}