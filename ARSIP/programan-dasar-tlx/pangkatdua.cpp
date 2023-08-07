#include <iostream>
using namespace std;

int main() {
    double n;
    cin >> n;
    while(n >= 2) {
        n /=2;
    }
    if(n == 1) {
        cout << "ya";
    } else {
        cout << "bukan";
    }
    return 0;
}