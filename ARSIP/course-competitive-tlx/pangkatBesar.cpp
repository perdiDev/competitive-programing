#include <bits/stdc++.h>
using namespace std;

int pangkat(int a, int n) {
    if(n == 1) {
        return a;
    } else if(n == 2) {
        return a * a;
    } else {
        if(n%2==0)
            return pangkat(a, n/2) * pangkat(a, n/2);
        else {
            return pangkat(a, n/2) * pangkat(a, n/2) * a;
        }
    }
}

int main() {
    int pangkat(3, 2);

    return 0;
}