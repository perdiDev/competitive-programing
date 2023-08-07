#include <iostream>
using namespace std;

int main() {
    int q, n, max = -100000, min = 100000;
    
    cin >> q;
    for(int i = 0; i < q; i++) {
        cin >> n;
        if(n >= max) {
            max = n;
        }
        if(n <= min) {
            min = n;
        }
    }

    cout << max <<  " " << min;

    return 0;
}