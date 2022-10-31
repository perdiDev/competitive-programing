#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c, d;

    cin >> a >> b >> c >> d;

    if(a*d == b*c)
        cout << "sama" << "\n";
    else if(a*d > b*c)
        cout << "lebih besar" << "\n";
    else  
        cout << "lebih kecil" << "\n";

    return 0;
}