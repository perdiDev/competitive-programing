#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << n << "\n";
    for(int i = n/2; i > 0; i--) {
        if(n%i == 0) {
            cout << i << "\n";
        }
    }
    return 0;
}