#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, isOn=0;
    cin >> n;
    // for(int i=1; i<=n; i++) {
    //     if(n%i == 0) {
    //         if(isOn == 0) isOn = 1;
    //         else isOn = 0;
    //     }
    // }

    // if(isOn) printf("lampu menyala");
    // else printf("lampu mati");

    if(sqrt(n) == round(sqrt(n))) cout << "lampu menyala" << "\n";
    else cout << "lampu mati" << "\n";

    return 0;
}