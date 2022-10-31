#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, hasil;
    char op;
    cin >> a >> op >> b;

    if(op == '+') {
        hasil = a + b;
        cout << hasil<< "\n";
    }
    else if(op == '-') {
        hasil = a - b;
        cout << hasil<< "\n";
    }
    else if(op == '*') {
        hasil = a * b;
        cout << hasil<< "\n";
    }
    else if(op == '>') {
        if(a>b){
            cout << "benar" << "\n";
        } else {
            cout << "salah" << "\n";
        }
    }
    else if(op == '<') {
        if(a<b){
            cout << "benar" << "\n";
        } else {
            cout << "salah" << "\n";
        }
    }
    else if(op == '=') {
        if(a==b){
            cout << "benar" << "\n";
        } else {
            cout << "salah" << "\n";
        }
    }

    return 0;
}

//  '+', '-', '*', '<', '>', dan '='.