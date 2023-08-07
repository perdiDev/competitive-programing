#include <iostream>
using namespace std;

void fungsi(int n) {
    if(n > 0) {
        fungsi(n-1);
            for(int i=0;i<n;i++){
                cout << "*";
            }
            cout << "\n";
        fungsi(n-1);
    }
}

int main() {
    int n;
    cin >> n;

    fungsi(n);

    return 0;
}