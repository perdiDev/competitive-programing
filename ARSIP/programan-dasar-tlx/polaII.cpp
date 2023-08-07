#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = n; i>=1; i--) {
        for(int k = 1; k <= n; k++) {
            if(k < i) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << "\n";
    }
}