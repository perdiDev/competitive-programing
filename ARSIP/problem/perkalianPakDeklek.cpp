#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, sum=0;
    cin >> a >> b;

    while(a>0){
        int satuanA = a%10;
        int dasarB = b;
        while(dasarB>0){
            int satuanB = dasarB%10;
            sum += satuanA * satuanB;
            // cout << satuanA << " " << satuanB << "->";
            dasarB/=10;
        }
        a/=10;
        // cout << satuanA << " ";
    }

    cout << sum << "\n";

    return 0;
}