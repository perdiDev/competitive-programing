#include <bits/stdc++.h>
using namespace std;

int main() {
    int b, p, l;
    cin >> b >> p >> l;

    if(b < 10){
        cout << "S";
    }
    else if(b <= 14){
        cout << "M";
    }
    else if(b <= 18){
        cout << "L";
    } else {
        cout << "X";
    }

    return 0;
}