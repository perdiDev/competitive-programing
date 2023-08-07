#include <bits/stdc++.h>
using namespace std;

int cekPrima(int x) {
    int cekin = 1;
    if(x == 1) cekin = 0;
    else if(x == 2) cekin = 1;
    else {
        for(int i=2;i*i<=x;i++){
            if(x%i==0){
                cekin = 0;
            }
        }
    }

    return cekin;
}

int main() {
    int n, faktorKe=1;
    cin >> n;
    
    int i = 2;
    while(i<=n) {
        int pangkat = 0;
        if(cekPrima(i)){
            while(n%i == 0){
                pangkat++;
                n/=i;
            }
        }

        if(faktorKe == 1) {
            if(pangkat == 1)
                cout << i;
            else if(pangkat > 1) 
                cout << i << "^" << pangkat;
            else faktorKe--;
        } else {
            if(pangkat == 1) 
                cout << " x " << i;
            else if(pangkat > 1)
                cout << " x " << i << "^" << pangkat;
            else faktorKe--;
        }
        i++;
        faktorKe++;
    }

    return 0;
}