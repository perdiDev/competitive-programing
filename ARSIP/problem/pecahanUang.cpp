#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int k;
    cin >> k;

    while(k>0){
        int n;
        if(k>=1000){
            n = k/1000;
            cout << 1000 << " " << n << "\n";
            k %= 1000;
        }
        else if(k>=500){
            n = k/500;
            cout << 500 << " " << n << "\n";
            k %= 500;
        }
        else if(k>=200){
            n = k/200;
            cout << 200 << " " << n << "\n";
            k %= 200;
        }
        else if(k>=100){
            n = k/100;
            cout << 100 << " " << n << "\n";
            k %= 100;
        }
        else if(k>=50){
            n = k/50;
            cout << 50 << " " << n << "\n";
            k %= 50;
        }
        else if(k>=20){
            n = k/20;
            cout << 20 << " " << n << "\n";
            k %= 20;
        }
        else if(k>=10){
            n = k/10;
            cout << 10 << " " << n << "\n";
            k %= 10;
        }
        else if(k>=5){
            n = k/5;
            cout << 5 << " " << n << "\n";
            k %= 5;
        }
        else if(k>=2){
            n = k/2;
            cout << 2 << " " << n << "\n";
            k %= 2;
        }
        else {
            n = k/1;
            cout << 1 << " " << n << "\n";
            k %= 1;
        }
    }

    return 0;
}