#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    for(int i = 1; i <= n; i++) {
        if(i == n) {
            if(i%k == 0) {
                cout << "*" << "\n";
            } else {
                cout << i << "\n";
            }
        } else {
            if(i%k == 0) {
                cout << "*" << " ";
            } else {
                cout << i << " ";
            }
        }
    }

    return 0;
}