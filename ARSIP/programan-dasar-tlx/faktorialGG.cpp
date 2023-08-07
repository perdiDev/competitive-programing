#include <iostream>
using namespace std;

int faktorialGG(int n) {
    if(n == 1) {
        return 1;
    } 
    else if(n%2 == 0) {
        return n/2 * faktorialGG(n - 1);
    }
    else {
        return n * faktorialGG(n - 1);
    }
}

int main() {
    int n;
    cin >> n;

    cout << faktorialGG(n);
    return 0;
}