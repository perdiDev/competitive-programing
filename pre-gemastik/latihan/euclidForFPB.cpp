#include <bits/stdc++.h>
using namespace std;

int euclidForFPB(int a, int b) {
    if(b==0) return a;
    else {
        return euclidForFPB(b, a%b);
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << euclidForFPB(a, b) << "\n";

    return 0;
}