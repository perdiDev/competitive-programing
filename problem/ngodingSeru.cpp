#include <bits/stdc++.h>
using namespace std;

int a, b, c, k;

void urutKecil(){
    if(a>b && a>c){
        cout << a << " ";
        if(b>c)
            cout << b << " " << c;
        else 
            cout << c << " " << b;
    }
    else if(b>c){
        cout << b << " ";
        if(a > c)
            cout << a << " " << c;
        else
            cout << c << " " << a;
    }
    else 
        cout << c << " ";
        if(b > a)
            cout << b << " " << a;
        else
            cout << a << " " << b;
}

void urutBesar(){
    if(a<b && a<c){
        cout << a << " ";
        if(b<c)
            cout << b << " " << c;
        else 
            cout << c << " " << b;
    }
    else if(b<c){
        cout << b << " ";
        if(a < c)
            cout << a << " " << c;
        else
            cout << c << " " << a;
    }
    else 
        cout << c << " ";
        if(b < a)
            cout << b << " " << a;
        else
            cout << a << " " << b;
}

int main() {
    if(k==1)
        urutKecil();
    else
        urutBesar();

    return 0;
}