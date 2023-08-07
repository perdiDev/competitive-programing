#include <iostream>
using namespace std;

int cekPrima(int num) {
    int size;
    for(int i=2;i <= num/2; i++) {
        if(num%i == 0){
            size++;
            if(size > 2) {
                break;
            }
        }
    }
    if(size <= 2) {
        cout << "YA" << endl;
    }
    else {
        cout << "BUKAN" << endl;
    }

    return 0;
}

int main() {
    int q, num, size;
    cin >> q;

    for(int i=0;i<q;i++) {
        cin >> num;
        cekPrima(num);
    }

    return 0;
}